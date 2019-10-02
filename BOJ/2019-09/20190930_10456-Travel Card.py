t = int(input())
for k in range(t):
    dp=[0 for i in range(10101)]
    tr=[0 for i in range(10101)]
    tr7=0
    tr30=0
    n=int(input())
    for i in range(30,n+60):
        if i<n+30:
            a,b=map(int, input().split())
        else:
            a=0
            b=0
        tr[i]=b
        tr7-=tr[i-7]
        tr7+=(2*b)

        tr30 = 0
        cnt = 0
        for j in reversed(range(i,i-30,-1)):
            if tr[j]>3:
                tr30+=6
                cnt+=1
            else:
                tr30+=(2*tr[j])
                cnt=0
        if cnt>6:
            tr30-=6
        
        dp[i] = min([dp[i-1]+a+(2*b), dp[i-1]+3+(2*b), dp[i-1]+6, dp[i-7]+18+tr7, dp[i-7]+36, dp[i-30]+45+tr30, dp[i-30]+90])
    print(dp[n+60-1])
