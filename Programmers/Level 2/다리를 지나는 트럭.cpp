#include <bits/stdc++.h>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    vector<int> bridge(bridge_length, 0);
    int answer = 0, idx = 0, weight_now = 0;
    
    while(idx < truck_weights.size() || weight_now)
    {
        //다리를 지난 트럭이 있는지 확인
        if(bridge[bridge.size() - 1]) weight_now -= bridge[bridge.size() - 1];
        
        //트럭 이동
        for(int i = bridge.size() - 1;i > 0;i--) bridge[i] = bridge[i - 1];
        
        //대기 트럭을 다리에 올릴 지 여부 확인
        if(idx < truck_weights.size() && weight >= weight_now + truck_weights[idx])
        {
            bridge[0] = truck_weights[idx];
            weight_now += truck_weights[idx];
            idx++;
        }
        else bridge[0] = 0;
        
        answer++;
    }
    return answer;
}
