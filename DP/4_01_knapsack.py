def knap_recur(w, n, val, wt):
    if w == 0 or n == 0:
        return 0
    
    item_wt = wt[n-1]
    item_val = val[n-1]

    if item_wt <= w: #valid
        # include
        ans1 =knap_recur(w-item_wt, n-1, val, wt) + item_val

        # exclude
        ans2 = knap_recur(w, n-1, val, wt)

        return max(ans1, ans2)
    else:
        # exclude
        return knap_recur(w, n-1, val, wt)


def knap_mem(w, n, val, wt, dp):
    if w == 0 or n == 0:
        return 0

    if dp[n][w] != -1:
        return dp[n][w]
    
    item_wt = wt[n-1]
    item_val = val[n-1]

    if item_wt <= w: #valid
        # include
        ans1 =knap_mem(w-item_wt, n-1, val, wt, dp) + item_val

        # exclude
        ans2 = knap_mem(w, n-1, val, wt, dp)

        dp[n][w] = max(ans1, ans2)
    else:
        # exclude
        dp[n][w] = knap_mem(w, n-1, val, wt, dp)

    return dp[n][w]

def knap_tab(w,n, val, wt):
    dp = [[0]*(w+1) for i in range(n+1)]

    for i in range(1, n+1):
        for j in range(1, w+1):
            item_wt = wt[i-1]
            item_val = val[i-1]

            if item_wt <= j:
                dp[i][j] = max(item_val+dp[i-1][j-item_wt], dp[i-1][j])
            else:
                dp[i][j] = dp[i-1][j]

    for elem in dp:
        print(elem)
    return dp[n][w]

val = [15,14,10,45,30]
wt = [2,5,1,3,4]
n = 5
w = 7
dp = [[-1]*(w+1) for i in range(n+1)]
# print(knap_recur(w,n, val, wt))
print(knap_mem(w,n, val, wt, dp))

print(knap_tab(w,n, val, wt))