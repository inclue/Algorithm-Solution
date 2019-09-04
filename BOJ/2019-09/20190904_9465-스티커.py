t = int(input())

for k in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    sk = [[None]*2 for i in range(n+1)]
    dp = [[None]*2 for i in range(n+1)]

    for i in range(n):
        sk[i][0] = a[i]
        sk[i][1] = b[i]
    
    sk[n][0] = 0
    sk[n][1] = 0

    dp[0][0] = sk[0][0]
    dp[0][1] = sk[0][1]
    dp[1][0] = dp[0][1] + sk[1][0]
    dp[1][1] = dp[0][0] + sk[1][1]
    
    for i in range(2, n+1):
        dp[i][0] = sk[i][0] + max(dp[i-1][1], dp[i-2][1])
        dp[i][1] = sk[i][1] + max(dp[i-1][0], dp[i-2][0])
    
    print(max(dp[n][0], dp[n][1]))
