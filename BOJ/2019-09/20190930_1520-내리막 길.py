n,m = map(int,input().split())
mount = []
down = []
dp = [[0] * m for i in range(n)]

for i in range(n):
    mount.append(list(map(int,input().split())))

for i in range(n):
    for j in range(m):
        down.append((mount[i][j],i,j))
down.sort(reverse=True,key=lambda a:a[0])
dp[0][0] = 1
for info in down:
    x=info[1]
    y=info[2]
    if x==0 and y==0:
        continue
    
    if x > 0 and info[0] < mount[x-1][y]:
        dp[x][y]+=dp[x-1][y]
    if x < n-1 and info[0] < mount[x+1][y]:
        dp[x][y]+=dp[x+1][y]
    if y > 0 and info[0] < mount[x][y-1]:
        dp[x][y]+=dp[x][y-1]
    if y < m-1 and info[0] < mount[x][y+1]:
        dp[x][y]+=dp[x][y+1]

print(dp[n-1][m-1])
