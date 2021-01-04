#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    vector<int> dp(n + 1, 0);
    
    //초기값 설정
    dp[0] = 1, dp[1] = 1;
    
    //점화식
    for(int i = 2;i <= n;i++) dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
    
    //결과값 출력
    return dp[n];
}
