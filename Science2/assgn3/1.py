import numpy as np

scoring_matrix = {'A': {'A': 4, 'C': -1, 'G': 1, 'T': -1}
				, 'C': {'A': -1, 'C': 4, 'G': -1, 'T': 1}
				, 'G': {'A': 1, 'C': -1, 'G': 4, 'T': -1}
				, 'T': {'A': -1, 'C': 1, 'G': -1, 'T': 4}}
pgap = -3

def globalAlignment(s, t):
	n = len(s)
	m = len(t)
	dp = np.zeros((n + 1, m + 1))
	for i in range(n + 1):
		dp[i][0] = pgap * i
	for i in range(m + 1):
		dp[0][i] = pgap * i
	for i in range(1, n + 1):
		for j in range(1, m + 1):
			dp[i][j] = max(dp[i-1][j-1] + scoring_matrix[s[i-1]][t[j-1]], dp[i][j-1] + pgap, dp[i-1][j] + pgap)
	gs = ""
	gt = ""
	i, j = n, m
	while i > 0 or j > 0:
		if i > 0 and j > 0 and dp[i-1][j-1] == dp[i][j] - scoring_matrix[s[i-1]][t[j-1]]:
			gs += s[i-1]
			gt += t[j-1]
			i-=1
			j-=1
		elif j>0 and dp[i][j-1] == dp[i][j] - pgap:
			gs += '_'
			gt += t[j-1]
			j -= 1
		elif i>0 and dp[i-1][j] == dp[i][j] - pgap:
			gs += s[i-1]
			gt += '_'
			i -= 1
	gs = gs[::-1]
	gt = gt[::-1]
	return {'score': dp[n][m], 's': gs, 't': gt}

def localAlignment(s, t):
	n = len(s)
	m = len(t)
	dp = np.zeros((n + 1, m + 1))
	for i in range(1, n + 1):
		for j in range(1, m + 1):
			dp[i][j] = max(dp[i-1][j-1] + scoring_matrix[s[i-1]][t[j-1]], dp[i][j-1] + pgap, dp[i-1][j] + pgap, 0)
	gs = ""
	gt = ""
	i, j = 0, 0
	score = 0
	for k in range(n+1):
		for l in range(m+1):
			if score <= dp[k][l]:
				i, j = k, l
				score = dp[k][l]
	while (i > 0 or j > 0) and dp[i][j] > 0:
		if i > 0 and j > 0 and dp[i-1][j-1] == dp[i][j] - scoring_matrix[s[i-1]][t[j-1]]:
			gs += s[i-1]
			gt += t[j-1]
			i-=1
			j-=1
		elif j>0 and dp[i][j-1] == dp[i][j] - pgap:
			gs += '_'
			gt += t[j-1]
			j -= 1
		elif i>0 and dp[i-1][j] == dp[i][j] - pgap:
			gs += s[i-1]
			gt += '_'
			i -= 1
	gs = gs[::-1]
	gt = gt[::-1]
	return {'score': dp[n][m], 's': gs, 't': gt}


if __name__ == "__main__":
	s = "GGCTGCAACTAGCTC"
	t = "GGGTAAGCTTGC"

	print("Global Alignment: ", globalAlignment(s, t))
	print("Local Alignment: ", localAlignment(s, t))
