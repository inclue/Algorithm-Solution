#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int answer = 0;
    for(int i = 1;i <= n;i++)
    {
        //n의 약수면 answer에 더하기
        if(n % i == 0) answer += i;
    }
    return answer;
}
