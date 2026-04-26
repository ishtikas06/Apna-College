'''
A person can take eith jump of 1 or 2
'''

# recursion
def climb_ways(n):
    if n == 1:
        return 1
    if n == 0:
        return 1
    
    return climb_ways(n-1) + climb_ways(n-2)

def climb_mem(n, f):
    if n == 0 or n == 1:
        return 1
    
    if f[n] != -1:
        return f[n]
    
    f[n] = climb_mem(n-1, f) + climb_mem(n-2, f)
    return f[n]

def climb_tab(n):
    f = [0]*(n+1)
    f[0] = 1
    f[1] = 1

    for i in range (2, n+1):
        f[i] = f[i-1] + f[i-2]

    return f[n]

n = 35
f = [-1]*(n+1)
print(climb_mem(n,f))
print(climb_tab(n))
print(climb_ways(n))