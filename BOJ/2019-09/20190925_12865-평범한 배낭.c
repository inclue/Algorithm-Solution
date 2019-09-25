#include <stdio.h>
long long dp[101][101010] = { 0, };

int main()
{
    int N, T;
    scanf("%d %d", &N, &T);
    for (int i = 1; i <= N; i++) {
        int K, S;
        scanf("%d %d", &K, &S);
        for (int j = 0; j < K; j++) dp[i][j] = dp[i - 1][j];
        for (int j = K; j <= T; j++)
            dp[i][j] = (dp[i - 1][j - K] + S > dp[i - 1][j] ? dp[i - 1][j - K] + S : dp[i - 1][j]);
    }
    printf("%lld", dp[N][T]);
    return 0;
}
