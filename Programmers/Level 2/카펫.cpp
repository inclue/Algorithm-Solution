#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    for(int i = 1;i * i <= yellow;i++)
    {
        //yellow를 i와 yellow / i로 분해 && yellow 각 테두리에 +2한 값이 yellow + brown 값과 같은 지 확인
        if(yellow % i == 0 && (i + 2) * (yellow / i + 2) == yellow + brown)
        {
            //큰 값부터 넣어주기
            answer.push_back(yellow / i + 2);
            answer.push_back(i + 2);
        }
    }
    
    return answer;
}
