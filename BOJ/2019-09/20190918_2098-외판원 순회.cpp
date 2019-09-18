#include <cstdio>
#include <cstring>

const int MAX_INT = 2100000000;
int n;
int w[17][17];
int dp[17][1<<17];
 
int tsp(int now, int visit)
{
    if(visit == (1<<n)-1) return w[now][0]?w[now][0]:MAX_INT;
    if(dp[now][visit] != -1) return dp[now][visit];
    dp[now][visit] = MAX_INT;
    
    for(int i=0;i<n;i++)
    {
        if(visit & (1<<i)) continue;
        if(w[now][i]==0) continue;
        int res = tsp(i, visit | (1<<i)) + w[now][i];
        if(dp[now][visit] > res) dp[now][visit] = res;
    }
    return dp[now][visit];
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&w[i][j]);
    }
    memset(dp, -1, sizeof(dp));
    printf("%d",tsp(0,1));
}
