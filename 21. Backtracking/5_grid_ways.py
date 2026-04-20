def grid_ways(grid, i, j):
    n, m = len(grid), len(grid[0])

    if i == n-1 and j == m-1:
        return 1

    if i >= n or j >= m:
        return 0
    
    # ways_down, ways_right = 0, 0
    ways_right = grid_ways(grid, i, j+1)
    ways_down = grid_ways(grid, i+1, j)

    return ways_down + ways_right
    
def ways_formula(n, m):
    pass  

n = int(input("Enter no of rows: "))
m = int(input("Enter no of cols: "))

grid = [['.']*m for i in range(n)]
print(grid_ways(grid, 0, 0))