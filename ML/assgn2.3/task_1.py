import numpy as np
import cvxpy as cp
import os
import shutil

X = 41
gamma = 0.99
delta = 1e-3
health = 5
arrow = 4
stamina = 3
Action = {0: 'SHOOT', 1: 'DODGE', 2: 'RECHARGE', 3: 'NOOP'}
arr = [0.5, 1, 2]
Y = arr[X % 3]
penalty = -10 / Y

def getProb():
    prob = np.zeros((4, health*arrow*stamina, health*arrow*stamina), dtype=float)
    for j in range(arrow):
        for k in range(stamina):
            prob[3][health*j+health*arrow*k][health*j+health*arrow*k] = 1
    for i in range(1, health):
        for j in range(1, arrow):
            for k in range(1, stamina):
                prob[0][i+health*j+health*arrow*k][i-1+health*(j-1)+health*arrow*(k-1)] = 0.5
                prob[0][i+health*j+health*arrow*k][i+health*(j-1)+health*arrow*(k-1)] = 0.5
    for i in range(1, health):
        for j in range(arrow):
                prob[1][i+health*j+health*arrow*1][i+health*min(j+1,3)] = 0.8
                prob[1][i+health*j+health*arrow*1][i+health*j] = 0.2
                prob[1][i+health*j+health*arrow*2][i+health*min(j+1,3)+health*arrow*1] = 0.64
                prob[1][i+health*j+health*arrow*2][i+health*j+health*arrow*1] = 0.16
                prob[1][i+health*j+health*arrow*2][i+health*min(j+1,3)] = 0.16
                prob[1][i+health*j+health*arrow*2][i+health*j] = 0.04
    for i in range(1, health):
        for j in range(1, arrow):
            for k in range(1, stamina):
                prob[2][i+health*j+health*arrow*k][i+health*j+health*arrow*min(k+1,2)] = 0.8
                prob[2][i+health*j+health*arrow*k][i+health*j+health*arrow*k] = 0.2
    return prob

def getPenalty():
    Penalty = np.zeros((health*arrow*stamina, 1))
    for j in range(arrow):
        for k in range(stamina):
            Penalty[health*j+health*arrow*k] = penalty
    return Penalty

def Constraint(v):
    Constraints = []
    epsilon = 1e-10
    for j in range(arrow):
        for k in range(stamina):
            Constraints.append(v[health*j+health*arrow*k] >= epsilon + gamma*v[health*j+health*arrow*k])
    for i in range(1, health):
        for j in range(1, arrow):
            for k in range(1, stamina):
                Constraints.append(v[i+health*j+health*arrow*k] >= epsilon + penalty+gamma*(0.5*v[i-1+health*(j-1)+health*arrow*(k-1)] + 0.5*v[i+health*(j-1)+health*arrow*(k-1)]))
    for i in range(1, health):
        for j in range(arrow):
                Constraints.append(v[i+health*j+health*arrow*1] >= epsilon + penalty+gamma*(0.8*v[i+health*min(j+1,3)] + 0.2*v[i+health*j]))
                Constraints.append(v[i+health*j+health*arrow*2] >= epsilon + penalty+gamma*(0.64*v[i+health*min(j+1,3)+health*arrow*1] + 0.16*v[i+health*j+health*arrow*1] + 0.16*v[i+health*min(j+1,3)] + 0.04*v[i+health*j]))
    for i in range(1, health):
        for j in range(1, arrow):
            for k in range(1, stamina):
                Constraints.append(v[i+health*j+health*arrow*k] >= epsilon + penalty+gamma*(0.8*v[i+health*j+health*arrow*min(k+1,2)] + 0.2*v[i+health*j+health*arrow*k]))
    return Constraints

def valueIteration(f):
    v = cp.Variable((health*arrow*stamina))
    objective = cp.Minimize(cp.sum_squares(v))
    prob = cp.Problem(objective, Constraint(v))
    try:
        prob.solve()
        print(v.value)
        printUtility(v.value, f)
    except:
        print("Error")

def printUtility(Util, f):
    print(Util, file=f)


if __name__ == "__main__":
    try:
        if os.path.exists('./outputs'):
            shutil.rmtree('./outputs')
        os.mkdir('./outputs')
    except OSError as error:
        print(error)
        os._exit()

    with open("./outputs/task_1_trace.txt", "a") as f:
        valueIteration(f)
