#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    string answer = "";
    int idx = 0;
    for(char x : s)
    {
        idx++;
        
        //띄어쓰기 나오면 인덱스 초기화
        if(x == ' ') answer.push_back(x),idx = 0;
        
        //각 단어의 인덱스 확인 후 대/소문자 처리
        else if(idx % 2) answer.push_back(toupper(x));
        else answer.push_back(tolower(x));
    }
    return answer;
}
