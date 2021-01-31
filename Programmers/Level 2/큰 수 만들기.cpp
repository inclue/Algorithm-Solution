#include <bits/stdc++.h>
using namespace std;

string solution(string number, int k)
{
    string answer = "";
    int idx = 0;
    
    //for문 돌면서 숫자 1개씩 선택해주기
    for(int i = 0;i < number.size() - k;i++)
    {
        //가장 큰 숫자 1개 선택
        int maxidx = idx;
        for(int j = idx;j <= i + k;j++)
        {
            if(number[maxidx] < number[j]) maxidx = j;
        }
        
        //정답에 추가
        idx = maxidx + 1;
        answer.push_back(number[maxidx]);
    }
    
    
    return answer;
}
