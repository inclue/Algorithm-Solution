#include <bits/stdc++.h>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    //길이가 4 or 6 인지 확인
    if(s.size() != 4 && s.size() != 6) answer = false;
    
    //숫자로만 구성돼있는지 확인
    for(char ch : s)
    {
        if(ch < '0' || ch > '9') answer = false;
    }
    
    return answer;
}
