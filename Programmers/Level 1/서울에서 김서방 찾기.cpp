#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> seoul)
{
    //김서방 찾기
    int kim = 0;
    for(int i = 0;i < seoul.size();i++)
    {
        if(seoul[i] == "Kim") kim = i;
    }
    
    return "김서방은 " + to_string(kim) + "에 있다";
}
