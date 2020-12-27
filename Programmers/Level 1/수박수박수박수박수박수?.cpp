#include <bits/stdc++.h>
using namespace std;

string solution(int n)
{
    string answer = "";
    for(int i = 0;i < n;i++)
    {
        if(i % 2) answer += "박"; //홀수번째 인덱스에서는 "박"
        else answer += "수"; //짝수번째 인덱스에서는 "수"
    }
    return answer;
}
