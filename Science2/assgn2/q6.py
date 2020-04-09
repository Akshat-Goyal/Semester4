import numpy as np 

def dot_plot(s1, s2):
    n1 = len(s1)
    n2 = len(s2)
    grid = np.zeros((n1+1, n2+1), dtype = str)
    grid[:] = " "
    grid[0:1, 1:] = np.array(list(s2))
    grid[1:, 0:1] = np.array(list(s1)).reshape(n1, 1)
    for i in range(1, n1+1):
        for j in range(1, n2+1):
            if grid[i][0] == grid[0][j]: grid[i][j] = 'x'
    return grid

def print_grid(grid):
    st = ""
    for i in range(grid.shape[1]):
        st += "| " + grid[0][i] + " "
    st += "|\n"
    for i in range(grid.shape[1]):
        st += "|---"
    st += "|\n"
    for i in range(1, grid.shape[0]):
        for j in range(grid.shape[1]):
            st += "| " + grid[i][j] + " "
        st += "|\n"
    print(st)

if __name__ == "__main__":
    s1 = "AUGUGGCAUGCCAGG"
    tmp = s1[::-1]
    complements = {'A': 'U', 'U': 'A', 'G': 'C', 'C': 'G'}
    s2 = ""
    for i in range(len(tmp)):
        s2 += complements[tmp[i]]
    print_grid(dot_plot(s1, s2))
