#include <bits/stdc++.h>
using namespace std;

string solution(string s, int n)
{
    string answer = "";
    for(char ch : s)
    {
        //소문자
        if(ch >= 'a' && ch <= 'z') answer += ((((ch - 'a') + n) % 26) + 'a');
        
        //대문자
        if(ch >= 'A' && ch <= 'Z') answer += ((((ch - 'A') + n) % 26) + 'A');
        
        //공백
        if(ch == ' ') answer += ' ';
    }
    return answer;
}
