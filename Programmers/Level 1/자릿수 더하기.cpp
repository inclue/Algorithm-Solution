#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int answer = 0;
    while(n)
    {
        //자릿수 더하기
        answer += (n % 10);
        
        //다음 자릿수로 넘기기
        n /= 10;
    }
    return answer;
}
