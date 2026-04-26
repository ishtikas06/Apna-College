a = [4,1,8,7]
b = [2,3,6,5]

a.sort()
b.sort()

diff = 0
for i in range(len(a)):
    diff += abs(a[i] - b[i])

print(diff)