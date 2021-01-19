#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> priorities, int location)
{
    int n = priorities.size();
    int answer = 0, idx = 0;
    
    //우선순위 별로 대기목록 확인
    for(int prior = 9;prior > 0;prior--)
    {
        int idx_last = idx;
        //idx부터 해당 우선순위에 해당되면 출력
        for(int i = 0;i < n;i++)
        {
            //해당 우선순위가 있는 경우 출력
            if(priorities[(idx + i) % n] == prior)
            {
                idx_last = (idx + i) % n, answer++;
                if((idx + i) % n == location) return answer;
            }
        }
        //맨 마지막에 출력한 문서 위치 기억
        idx = idx_last;
    }
}
