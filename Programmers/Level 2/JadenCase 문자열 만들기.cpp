#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    string answer = "";
    bool isFirst = true;
    for(char ch : s)
    {
        //띄어쓰기인 경우
        if(ch == ' ') answer.push_back(ch), isFirst = true;
        
        //첫 글자인 경우
        else if(isFirst) answer.push_back(toupper(ch)), isFirst = false;
        
        //나머지 경우
        else answer.push_back(tolower(ch));
    }
    return answer;
}
