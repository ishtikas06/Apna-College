def is_safe(sudoku, row, col, digit):

    # vertical
    for i in range(9):
        if sudoku[i][col] == digit:
            return False
        
    # horizonatl
    for j in range(9):
        if sudoku[row][j] == digit:
            return False
        
    # grid
    # if row >= 0 and row <= 2:
    #     start_row = 0
    # elif row >= 3 and row <= 5:
    #     start_row = 3
    # else:
    #     start_row = 6

    # if col >= 0 and col <= 2:
    #     start_col = 0
    # elif col >= 3 and col <= 5:
    #     start_col = 3
    # else:
    #     start_col = 6

    start_row = (row//3)*3
    start_col = (col//3)*3


    for i in range(start_row, start_row+3):
        for j in range(start_col, start_col+3):
            if sudoku[i][j] == digit:
                return False
            
    return True


def solver(sudoku, row, col):

    if row == 9:
        for elem in sudoku:
            print(elem)
        return True

    next_row, next_col = row, col + 1
    if col + 1 == 9:
        next_row, next_col = row+1, 0

    if sudoku[row][col] != 0:
        return solver(sudoku, next_row, next_col)

    for digit in range(1,10):
        if is_safe(sudoku, row, col, digit):
            sudoku[row][col] = digit
            if solver(sudoku, next_row, next_col):
                return True
            sudoku[row][col] = 0

    return False

sudoku = [
    [0, 0, 8, 0, 0, 0, 0, 0, 0],
    [4, 9, 0, 1, 5, 7, 0, 0, 2],
    [0, 0, 3, 0, 0, 4, 1, 9, 0],
    [1, 8, 5, 0, 6, 0, 0, 2, 0],
    [0, 0, 0, 0, 2, 0, 0, 6, 0],
    [9, 6, 0, 4, 0, 5, 3, 0, 0],
    [0, 3, 0, 0, 7, 2, 0, 0, 4],
    [0, 4, 9, 0, 3, 0, 0, 5, 7],
    [8, 2, 7, 0, 0, 9, 0, 1, 3]
]

print(solver(sudoku, 0, 0))