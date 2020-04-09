import random

if __name__ == "__main__":
	# binomial distribution
	p = 0.25
	n = 1000
	A = 240
	N = 10000

	count = 0
	for _ in range(N):
		X = [random.random() for i in range(n)]
		cnt = sum(x <= p for x in X)
		if cnt >= A: count += 1
	prob1 = count / N
	print(count)
	print("By Simulation: " + str(prob1))

	prob2 = 0
	C = (1 - p) ** n
	for r in range(1, n + 1):
		C = C / r * (n - r + 1) * p / (1 - p)
		if r >= A: prob2 += C
	print("Using Binomial distribution: " + str(round(prob2, 5)))
