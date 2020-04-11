import numpy as np
import cvxpy as cp
import json
import os
import shutil


X = 8
gamma = 0.99
health = 5
arrow = 4
stamina = 3
Action = {0: 'NOOP', 1: 'SHOOT', 2: 'DODGE', 3: 'RECHARGE'}
arr = [0.5, 1, 2]
Y = arr[X % 3]
penalty = -10 / Y


def getState(i, j, k):
    state = i + j * health + k * health * arrow
    return state


def validActions():
    actions = []
    for i in range(health):
        for j in range(arrow):
            for k in range(stamina):
                if not i:
                    actions.append(((i, j, k), 0))
                else:
                    if j and k:
                        actions.append(((i, j, k), 1))
                    if k:
                        actions.append(((i, j, k), 2))
                    if k < stamina - 1:
                        actions.append(((i, j, k), 3))
    return np.array(actions)


def getProb(V):
    prob = np.zeros((health * arrow * stamina, V.shape[0]), dtype=float)
    for i in range(health):
        for j in range(arrow):
            for k in range(stamina):
                for l in range(V.shape[0]):
                    if not V[l][1] and V[l][0] == (i, j, k):
                        prob[getState(i, j, k)][l] = 1
                    elif V[l][1] == 1:
                        if V[l][0] == (i + 1, j + 1, k + 1):
                            prob[getState(i, j, k)][l] = 0.5
                        elif V[l][0] == (i, j + 1, k + 1):
                            prob[getState(i, j, k)][l] = 0.5
                    elif V[l][1] == 2:
                        if V[l][0][2] == 1:
                            if V[l][0] == (i, j - 1, k + 1):
                                prob[getState(i, j, k)][l] = 0.8
                            elif V[l][0] == (i, j, k + 1):
                                prob[getState(i, j, k)][l] = 0.2
                        elif V[l][0][2] == 2:
                            if V[l][0] == (i, j - 1, k + 1):
                                prob[getState(i, j, k)][l] = 0.64
                            elif V[l][0] == (i, j, k + 1):
                                prob[getState(i, j, k)][l] = 0.16
                            elif V[l][0] == (i, j - 1, k + 2):
                                prob[getState(i, j, k)][l] = 0.16
                            elif V[l][0] == (i, j, k + 2):
                                prob[getState(i, j, k)][l] = 0.04
                    else:
                        if V[l][0] == (i, j, k - 1):
                            prob[getState(i, j, k)][l] = 0.8
                        elif V[l][0] == (i, j, k):
                            prob[getState(i, j, k)][l] = 0.2
    return prob


def getDelta(V):
    delta = np.zeros((health * arrow * stamina, V.shape[0]), dtype=float)
    for i in range(health):
        for j in range(arrow):
            for k in range(stamina):
                for l in range(V.shape[0]):
                    if V[l][0] == (i, j, k):
                        delta[getState(i, j, k)][l] = 1
    return delta


def getA(V):
    A = getDelta(V) - getProb(V)
    return A


def getReward(V):
    R = np.zeros((1, V.shape[0]), dtype=float)
    for l in range(V.shape[0]):
        if V[l][0][0]:
            R[0][l] = penalty
        R = R.reshape((1, V.shape[0]))
    return R


def getAlpha():
    alpha = np.zeros((health * arrow * stamina, 1), dtype=float)
    alpha[getState(health - 1, arrow - 1, stamina - 1)][0] = 1
    return alpha


def MDPSolver():
    V = validActions()
    A = getA(V)
    R = getReward(V)
    alpha = getAlpha()
    X = cp.Variable(shape=(V.shape[0], 1), name='X')
    constraints = [cp.matmul(A, X) == alpha, X >= 0]
    objective = cp.Maximize(cp.matmul(R, X))
    problem = cp.Problem(objective, constraints)
    problem.solve()
    X = np.array(X.value)
    objectiveValue = float(np.matmul(R, X))
    policy = getPolicy(X, V)
    mdp = {'a': A.tolist(), 'r': R.tolist(), 'alpha': alpha.tolist(),
           'x': X.tolist(), 'policy': policy, 'objective': objectiveValue}
    return mdp


def getPolicy(X, V):
    pdict = {}
    for i in range(X.shape[0]):
        if V[i][0] in pdict:
            if pdict[V[i][0]][0] < X[i]:
                pdict[V[i][0]] = (X[i], V[i][1])
        else:
            pdict[V[i][0]] = (X[i], V[i][1])
    policy = []
    for i in range(health):
        for j in range(arrow):
            for k in range(stamina):
                policy.append([[i, j, k], Action[pdict[(i, j, k)][1]]])
    return policy


if __name__ == "__main__":
    try:
        if os.path.exists('./outputs'):
            shutil.rmtree('./outputs')
        os.mkdir('./outputs')
    except OSError as error:
        print(error)
        os._exit()

    with open("./outputs/output.json", "a") as f:
        mdp = MDPSolver()
        json.dump(mdp, f)
    # with open("./outputs/task_1_trace.txt", "r") as f:
        # print(json.load(f))
