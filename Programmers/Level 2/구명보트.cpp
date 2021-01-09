#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> people, int limit)
{
    //몸무게 순으로 정렬
    vector<bool> visited(people.size(), false);
    sort(people.begin(), people.end());
    
    //구명보트 사용 횟수 세기
    int answer = 0;
    for(int i = 0;i < people.size();i++)
    {
        //이미 탄 사람인지 여부 체크
        if(visited[i]) continue;
        visited[i] = true;
        
        //한명을 더 태울 수 있는 지 체크
        long long idx = upper_bound(people.begin(), people.end(), limit - people[i])
            - people.begin();
        while(idx >= 0)
        {
            idx--;
            if(idx == -1 || !visited[idx]) break;
        }
        if(idx != -1) visited[idx] = true;
        
        //구명보트 사용 횟수 증가
        answer++;
    }
    
    return answer;
}
