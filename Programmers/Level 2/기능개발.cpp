#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    //작업 일수 계산
    vector<int> days;
    for(int i = 0;i < speeds.size();i++) days.push_back((99 + speeds[i] - progresses[i]) / speeds[i]);
    
    //배포 작업 묶어주기
    vector<int> answer;
    int cnt = 0, prev = days[0];
    for(int day : days)
    {
        if(prev < day)
        {
            answer.push_back(cnt);
            cnt = 1, prev = day;
        }
        else cnt++;
    }
    
    //마지막 배포 작업들 추가
    answer.push_back(cnt);
    return answer;
}
