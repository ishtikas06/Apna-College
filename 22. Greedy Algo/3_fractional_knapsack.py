def fractional_knapsack(value, weight, w):
    n = len(value)
    ratio = []

    for i in range(n):
        ratio.append((value[i]/weight[i], i))

    ratio.sort(key= lambda x: x[0], reverse=True)

    ans = 0
    for i in range(n):
        idx = ratio[i][1]
        if weight[idx] <= w:
            ans += value[idx]
            w -= weight[idx]
        else:
            ans += ratio[i][0]*w
            w = 0

    return ans

value = [60,100,120]
weight = [10,20,30]
w = 50

ans = fractional_knapsack(value, weight, w)
print(ans)