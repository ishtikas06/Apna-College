def is_safe(board, row, col) -> bool:
    n = len(board)
    # horizonal
    for j in range(n):
        if board[row][j] == "Q":
            return False
        
    # verical
    for i in range(n):
        if board[i][col] == "Q":
            return False
        
    # diagonal top left
    i, j = row, col
    while i >= 0 and j >= 0:
        if board[i][j] == "Q":
            return False
        i -= 1
        j -= 1
        
    # diagonal top right
    i, j = row-1, col+1
    while i >= 0 and j < n:
        if board[i][j] == "Q":
            return False
        i -= 1
        j += 1
        
    # diagonal bottom left
    i, j = row+1, col-1
    while i < n and j >= 0:
        if board[i][j] == "Q":
            return False
        i += 1
        j -= 1
        
    # diagonal bottom r
    i, j = row+1, col+1
    while i < 0 and j < 0:
        if board[i][j] == "Q":
            return False
        i += 1
        j += 1
        
    return True

def n_queens(board: list[list], row: int) -> None:
    n = len(board)

    if row == n:
        for elem in board:
            print(elem)
        print("--------------------------------")
        return True
    
    count = 0
    for j in range(n):
        if is_safe(board, row, j):
            board[row][j] = "Q"
            count += n_queens(board, row+1)
            if count == 1:
                return True
            
            board[row][j] = "."

    return count

n = int(input("Enter the value of n: "))
board = [['.']*n for i in range(n)]

print(n_queens(board, 0))