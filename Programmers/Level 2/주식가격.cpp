#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prices)
{
    vector<int> answer(prices.size());
    priority_queue<pair<int, int>> pq;
    
    for(int i = 0;i < prices.size();i++)
    {
        //해당 시점의 주식 가격보다 주식가격이 떨어진 경우 answer에 저장
        while(!pq.empty() && pq.top().first > prices[i])
        {
            answer[pq.top().second] = i - pq.top().second;
            pq.pop();
        }
        
        //해당 시점의 주식 가격을 우선순위 큐에 삽입
        pq.push({prices[i], i});
    }
    
    //남아있는 시점의 주식 가격을 저장
    while(!pq.empty())
    {
        answer[pq.top().second] = prices.size() - pq.top().second - 1;
        pq.pop();
    }
    return answer;
}
