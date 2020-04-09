import json
import requests
import numpy as np
import sys

API_ENDPOINT = 'http://10.4.21.147'
PORT = 3000
MAX_DEG = 11
POPULATION_SIZE = 10
GENERATIONS = 10
TRAIN_RATIO = 0.25
VAL_RATIO = 0.75
TEAM_ID = "MsOYrg4QoHcnSUht1hvbjhYM5BgzBcQT5HO3WVReiC338ykhP1"


def get_errors(id, vector):
    """
    returns python array of length 2
    (train error and validation error)
    """
    for i in vector:
        assert -10 <= abs(i) <= 10
    assert len(vector) == MAX_DEG

    return json.loads(send_request(id, vector, 'geterrors'))


def submit(id, vector):
    """
    used to make official submission of your weight vector
    returns string "successfully submitted" if properly submitted.
    """
    for i in vector:
        assert -10 <= abs(i) <= 10
    assert len(vector) == MAX_DEG
    return send_request(id, vector, 'submit')


def urljoin(root, port, path=''):
    root = root + ':' + str(port)
    if path:
        root = '/'.join([root.rstrip('/'), path.rstrip('/')])
    return root


def send_request(id, vector, path):
    api = urljoin(API_ENDPOINT, PORT, path)
    vector = json.dumps(vector)
    response = requests.post(api, data={'id': id, 'vector': vector}).text
    if "reported" in response:
        print(response)
        exit()

    return response


def fit(vector):
    # return training and validation error
    err = get_errors(TEAM_ID, vector)
    return err


def fitness_score(er):
    # returns fitness score

    # return er[0]*er[1]
    # return er[0]*er[1]*(er[0]**val)
    # return abs((er[0]-er[1]))*(er[0]+er[1])
    return TRAIN_RATIO*er[0] + VAL_RATIO*er[1]


def crossover(ind, population):
    # selects random index crosspoint and does crossover
    c = np.random.randint(1, len(population)-1)
    first_part = population[ind[0]][:c]
    second_part = population[ind[1]][c:]
    children = np.concatenate((first_part, second_part))
    return children


def mutation(children):
    # adding some random number to elements of children with some probability
    for i in range(0, 11):
        if np.random.uniform(-1, 1) < 0.5:
            continue

        children[i] = children[i] + np.random.uniform(-1e-13, 1e-13)
        children[i] = min(10, children[i])
        children[i] = max(-10, children[i])

    return list(children)


def ga():
    # build up initial population
    wghts = [0.0, 0.1240317450077846, -6.211941063144333, 0.04933903144709126, 0.03810848157715883, 8.132366097133624e-05, -
             6.018769160916912e-05, -1.251585565299179e-07, 3.484096383229681e-08, 4.1614924993407104e-11, -6.732420176902565e-12]

    population = []

    # building initial population
    for i in range(POPULATION_SIZE):
        population.append(wghts.copy())

    # adding noise to make initial population
    for i in range(POPULATION_SIZE):
        # lst = list(np.random.normal(0, 1, 11))
        for j in range(len(population[i])):
            population[i][j] = population[i][j] + \
                np.random.uniform(-1*1e-12, 1*1e-12)
            population[i][j] = min(10, population[i][j])
            population[i][j] = max(-10, population[i][j])

    store_population = []

    for i in range(POPULATION_SIZE):
        er = fit(population[i])
        val = fitness_score(er)
        store_population.append((val, population[i], er[0], er[1]))

# UNCOMMENT THIS PART OF CODE IF YOU WANT TO READ POPULATION FROM SOME FILE INSTEAD OF STARTING FROM INITIAL VECTOR

    # use previous iterations best output as initial population by reading from file
    # with open('population.json') as f:
    #     store_population = json.loads(f.read())

    # store_population1 = []

    # for pop in store_population:
    #     er = fit(pop[1])
    #     val = fitness_score(er)
    #     store_population1.append((val, pop[1], er[0], er[1]))

    # store_population = store_population1

    gen = 0

    while gen < GENERATIONS:
        gen += 1

        probability = []
        error = []
        total = 0

        population = []
        sz = 0
        store_population.sort(key=lambda x: x[0])
        for pop in store_population:
            key = pop[0]
            val = pop[1]
            sz += 1
            population.append(val)
            error.append(key)
            total += 1/key
            if sz == POPULATION_SIZE:
                break

        print(store_population[0][2], store_population[0][3])
        print('\n')

        # convert errors value to probability
        for er in error:
            prob = 1/(er*total)
            probability.append(prob)

        i = 0

        while i < POPULATION_SIZE:
            i += 1
            # choose two parents according to their probability values
            ind = np.random.choice(
                POPULATION_SIZE, 2, replace=False, p=probability)

            # crossover of parents to make child
            children = crossover(ind, population)

            # mutation of children
            children = mutation(children)

            # store this children
            er = fit(children)
            val = fitness_score(er)
            store_population.append((val, children, er[0], er[1]))

            print("Children  ", end="")
            print(er[0], er[1])

        # Submit best vector based upon total score, train error and validation error
        store_population.sort(key=lambda x: x[0])
        submit_status = submit(TEAM_ID, store_population[0][1])
        assert "submitted" in submit_status

        store_population.sort(key=lambda x: x[2])
        submit_status = submit(TEAM_ID, store_population[0][1])
        assert "submitted" in submit_status

        store_population.sort(key=lambda x: x[3])
        submit_status = submit(TEAM_ID, store_population[0][1])
        assert "submitted" in submit_status

    # saving top 10 fittest members to a file
    store_population.sort(key=lambda x: x[0])
    print(store_population[0][2], store_population[0][3])
    print('\n')

    with open('population.json', 'w') as f:
        f.write(json.dumps(store_population[:POPULATION_SIZE], indent=4))


if __name__ == "__main__":
    """
    ga function is called here
    """
    ga()
