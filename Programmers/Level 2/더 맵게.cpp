#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K)
{
    // heap에 원소 삽입
    priority_queue<int> pq;
    for(int jisu : scoville) pq.push(jisu * -1);
    
    // 음식 섞기
    int answer = 0;
    while(pq.size() >= 2 && pq.top() > K * -1)
    {
        // 가장 작은 맵지 않은 두 음식 추출
        int first = pq.top();
        pq.pop();
        
        int second = pq.top();
        pq.pop();
        
        // 섞어서 새로운 음식 만들기
        pq.push(second * 2 + first);
        answer++;
    }
    
    // 스코빌 지수가 K 미만인 음식이 있는지 여부 확인 후 결과 출력
    if(pq.top() > K * -1) return -1;
    return answer;
}
