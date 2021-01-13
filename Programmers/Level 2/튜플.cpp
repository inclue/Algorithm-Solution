#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s)
{
    // 튜플 파싱
    vector<vector<int>> tup;
    for(int i = 1;i < s.size() - 1;i++)
    {
        vector<int> now;
        i++; // '{'
        
        int temp = 0;
        while(s[i] != '}')
        {
            
            if(s[i] == ',')
            {
                now.push_back(temp);
                temp = 0;
            }
            else temp = temp * 10 + (s[i] - '0');
            i++;
        }
        if(temp) now.push_back(temp);
        
        tup.push_back(now);
        i++; // '}'
    }
    
    // 튜플 길이별로 정렬
    sort(tup.begin(), tup.end(), [](auto& a, auto& b) {
        return a.size() < b.size();
    });
    
    // 튜플 길이별로 없는 숫자를 계속 추가함.
    vector<int> answer;
    for(int i=0;i<tup.size();i++)
    {
        for(int j=0;j<tup[i].size();j++)
        {
            if(find(answer.begin(), answer.end(), tup[i][j]) == answer.end())
            {
                answer.push_back(tup[i][j]);
                break;
            }
        }
    }
    return answer;
}
