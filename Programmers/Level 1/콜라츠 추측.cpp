#include <bits/stdc++.h>
using namespace std;

int solution(int num)
{
    //작업 진행 중 int 범위 넘을 수 있음
    long long n = num;
    int answer = 0;
    
    while(n != 1)
    {
        //500번 반복해도 안되면 -1
        if(answer == 500)
        {
            answer = -1;
            break;
        }
        
        //작업 진행
        if(n % 2) n = n * 3 + 1;
        else n /= 2;
        
        answer++;
    }
    return answer;
}
