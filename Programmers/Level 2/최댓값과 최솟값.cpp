#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    int idx = 0;
    vector<int> su;
    
    //문자열 파싱
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == ' ')
        {
            su.push_back(stoi(s.substr(idx, i - idx + 1)));
            idx = i;
        }
    }
    su.push_back(stoi(s.substr(idx, s.size() - idx)));
    
    //정렬 후 최대/최소 출력
    sort(su.begin(), su.end());
    string answer = to_string(su[0]) + " " + to_string(su[su.size() - 1]);
    return answer;
}
