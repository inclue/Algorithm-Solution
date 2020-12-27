#include <bits/stdc++.h>
using namespace std;

int solution(string dartResult)
{
    int answer = 0;
    int prev_score = 0;
    int score = 0;
    for(int i = 0;i < dartResult.size();i++)
    {
        //점수 계산
        if(isdigit(dartResult[i])) score = score * 10 + (dartResult[i] - '0');
        else
        {
            //보너스 계산
            if(dartResult[i] == 'D') score = score * score;
            else if(dartResult[i] == 'T') score = score * score * score;
            
            //옵션 계산
            if(i + 1 < dartResult.size() && dartResult[i + 1] == '#') score *= -1, i++;
            else if(i + 1 < dartResult.size() && dartResult[i + 1] == '*')
            {
                //score 2배로 키우기
                score = score * 2, i++;
                
                //prev_score를 추가적으로 한번 더 더해준다.
                answer += score + prev_score;
                
                prev_score = score;
                score = 0;
                continue;
            }
            answer += score;
            prev_score = score;
            score = 0;
        }
    }
    
    return answer;
}
