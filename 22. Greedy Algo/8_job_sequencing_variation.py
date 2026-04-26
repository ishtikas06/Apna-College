jobs = [(0,4,20), (1,1,10), (2,1,40), (3,1,30)]

jobs.sort(key = lambda x: x[1], reverse=True)

profit = jobs[0][2]
safe_deadline = 2

for i in range(1, len(jobs)):
    if jobs[i][0] >= safe_deadline:
        profit += jobs[i][1]
        safe_deadline += 1

print(profit)