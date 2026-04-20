# def print(arr, n):
#     for i in range(n):
#         print(arr[i], end=" ")

def change_arr(arr, n, i):
    if i == n:
        print(arr)
        return
    
    arr[i] = i+1
    change_arr(arr, n, i+1)
    arr[i] -= 2


arr = [0]*5

change_arr(arr, len(arr), 0)
print(arr)