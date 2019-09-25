n,k = map(int,input().split())
dp = [[0] * (n+1) for i in range(k+1)]

for i in range(n+1):
    dp[1][i] = 1

for i in range(2, k+1):
    for j in range(n+1):
        for t in range(j+1):
            dp[i][j] += dp[i-1][t]
            dp[i][j]%=1000000000

print(dp[k][n])
