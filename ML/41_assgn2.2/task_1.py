import numpy as np
import os
import shutil

X = 41
gamma = 0.99
delta = 1e-3
health = 5
arrow = 4
stamina = 3
Policy = np.zeros((health, arrow, stamina), dtype=object)
Util = None
Action = {0: 'SHOOT', 1: 'DODGE', 2: 'RECHARGE'}
arr = [0.5, 1, 2]
Y = arr[X % 3]
penalty = -10 / Y
Reward = np.array([penalty, penalty, penalty, 10])


def shoot(i, j, k, prev):
    if not i or not j or not k:
        return float('-inf')
    ret = 0
    if i == 1:
        ret = Reward[0] + 0.5 * Reward[3] + gamma * (0.5 * prev[i, j - 1, k - 1] +
                                                     0.5 * prev[0, j - 1, k - 1])
    else:
        ret = Reward[0] + gamma * (0.5 * prev[i, j - 1, k - 1] +
                                   0.5 * prev[i - 1, j - 1, k - 1])
    return ret


def dodge(i, j, k, prev):
    if not i or not k:
        return float('-inf')
    ret = 0
    if k == 2:
        if j == arrow - 1:
            ret = Reward[1] + gamma * (0.8 * prev[i, j, 1] +
                                       0.2 * prev[i, j, 0])
        else:
            ret = Reward[1] + gamma * (0.8 * (0.8 * prev[i, j + 1, 1] + 0.2 * prev[i, j, 1]) +
                                       0.2 * (0.8 * prev[i, j + 1, 0] + 0.2 * prev[i, j, 0]))
    else:
        if j == arrow - 1:
            ret = Reward[1] + gamma * prev[i, j, 0]
        else:
            ret = Reward[1] + gamma * (0.8 * prev[i, j + 1, 0] +
                                       0.2 * prev[i, j, 0])
    return ret


def recharge(i, j, k, prev):
    if not i:
        return float('-inf')
    ret = 0
    if k == stamina - 1:
        ret = Reward[2] + gamma * prev[i, j, k]
    else:
        ret = Reward[2] + gamma * (0.8 * prev[i, j, k + 1] +
                                   0.2 * prev[i, j, k])
    return ret


def findUtility():
    prev = np.copy(Util)
    for i in range(health):
        for j in range(arrow):
            for k in range(stamina):
                if not i:
                    Policy[i, j, k] = '-1'
                    continue
                ret = [shoot(i, j, k, prev), dodge(
                    i, j, k, prev), recharge(i, j, k, prev)]
                Util[i, j, k] = max(ret)
                Policy[i, j, k] = Action[ret.index(Util[i, j, k])]
    return prev


def valueIteration(f):
    global Util
    Util = np.zeros((health, arrow, stamina))
    it = 0
    while True:
        print('iteration='+str(it), file=f)
        prev = findUtility()
        Util = findUtility()
        printUtility(f)
        if np.max(np.abs(Util - prev)) < delta:
            break
        it += 1


def printUtility(f):
    for i in range(health):
        for j in range(arrow):
            for k in range(stamina):
                print('(' + str(i) + ',' + str(j) + ',' + str(k) + '):' +
                      Policy[i, j, k] + '=[' + str(round(Util[i, j, k], 3)) + ']', file=f)
    print('\n', file=f)


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

    Reward[0] = -0.25
    Reward[1] = -2.5
    Reward[2] = -2.5
    with open("./outputs/task_2_part_1_trace.txt", "a") as f:
        valueIteration(f)

    Reward[0] = -2.5
    gamma = 0.1
    with open("./outputs/task_2_part_2_trace.txt", "a") as f:
        valueIteration(f)

    delta = 1e-10
    with open("./outputs/task_2_part_3_trace.txt", "a") as f:
        valueIteration(f)
