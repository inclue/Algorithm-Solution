#include <bits/stdc++.h>
using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    
    //(0, 1), (2, 3), (4, 5), ..., (n - 1, n) 이런 식으로 묶어줌.
    a--, b--;
    for(;;answer++)
    {
        //몫이 같으면 같은 경기를 치르는 것
        if(a/2 == b/2) break;
        
        //새로운 번호 부여
        a/=2, b/=2;
    }
    return answer;
}
