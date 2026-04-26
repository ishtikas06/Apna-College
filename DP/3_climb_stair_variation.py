'''
A person can take eith jump of 1 or 3, OR 1,2,3, OR anything
'''
# 1,2,3 jumps
def ways_tab(n):
    f = [0] * (n+1)
    f[0] = 1
    f[1] = 1
    f[2] = 2

    for i in range(3, n+1):
        f[i]  = f[i-1] + f[i-2] + f[i-3]

    return f[n]


n = 5
print(ways_tab(n))