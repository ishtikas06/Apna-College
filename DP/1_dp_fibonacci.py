import time
# O(2^n)
def fib(n):
    if n == 0 or n == 1:
        return n
    
    return fib(n-1) + fib(n-2)

# O(n)
# memoization
# def fib_dp(n, f):
#     if n == 0 or n == 1:
#         return n
    
#     if f[n] != -1:
#         return f[n]
    
#     f[n] = fib(n-1, f) + fib(n-2, f)
#     return f[n]

# tabulation
def fib_dp(n):
    f = [0]*(n+1)
    f[0] = 0
    f[1] = 1
    
    for i in range(2, n+1):
        f[i] = f[i-1] + f[i-2]
    
    
    return f[n]

n = 30

st = time.perf_counter()
print(fib_dp(n), end=" ")
end = time.perf_counter()
print(end-st)
st = time.perf_counter()
print(fib(n), end=" ")
end = time.perf_counter()
print(end-st)
