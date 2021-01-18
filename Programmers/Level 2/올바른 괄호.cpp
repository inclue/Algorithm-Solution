#include <bits/stdc++.h>
using namespace std;

bool solution(string s)
{
    //괄호 열기 갯수 세기
    int open_cnt = 0;
    for(char ch : s)
    {
        if(ch == '(') open_cnt++;
        else
        {
            //닫는 괄호가 더 먼저 나오는 경우 false
            if(open_cnt == 0) return false;
            open_cnt--;
        }
    }
    
    //괄호의 짝이 맞는지 체크
    return (open_cnt == 0);
}
