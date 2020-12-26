#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    vector<bool> check(n + 1, true);
    
    //체육복 도난당한 학생 Check
    for(int i = 0;i < lost.size();i++) check[lost[i]] = false;
    
    //도난당한 학생 중 본인의 여벌 체육복이 있는지 Check
    for(int i = 0;i < reserve.size();i++)
    {
        if(!check[reserve[i]])
        {
            check[reserve[i]] = true;
            reserve.erase(reserve.begin() + i);
            i--;
        }
    }
    
    //도난당한 학생 중 바로 앞번호 혹은 바로 뒷번호의 학생한테 여벌 체육복이 있는지 Check
    for(int i = 0;i < reserve.size();i++)
    {
        if(!check[reserve[i] - 1]) check[reserve[i] - 1] = true;
        else if(!check[reserve[i] + 1]) check[reserve[i] + 1] = true;
    }
    
    //체육 수업을 들을 수 있는 학생 수 세기
    int answer = 0;
    for(int i = 1;i <= n;i++)
    {
        if(check[i]) answer++;
    }
    return answer;
}
