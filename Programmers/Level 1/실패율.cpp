#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    vector<pair<int, pair<long long, long long>>> fail;
    for(int i = 0;i < N;i++) fail.push_back({i + 1, {0LL, 0LL}});

    for(int stage : stages)
    {
        //실패율의 분자 더해주기
        if(stage <= N) fail[stage - 1].second.first++;
        
        //실패율의 분모 더해주기
        for(int j = 0;j < min(stage, N);j++) fail[j].second.second++;
    }
    
    //실패율 기준으로 정렬
    sort(fail.begin(), fail.end(), [](auto a, auto b) {
        if((a.second.first * b.second.second) != (b.second.first * a.second.second))
            return (a.second.first * b.second.second) > (b.second.first * a.second.second);
        else return a.first < b.first; //같은 경우 작은번호 스테이지가 앞으로
    });
    
    //결과 출력
    vector<int> answer;
    for(auto x : fail) answer.push_back(x.first);
    return answer;
}
