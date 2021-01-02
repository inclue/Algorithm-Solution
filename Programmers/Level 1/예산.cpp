#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> d, int budget)
{
    int answer = 0;
    
    //작은 금액부터 정렬
    sort(d.begin(), d.end());
    
    //차례대로 넣어보기
    for(int x : d)
    {
        if(budget < x) break;
        budget -= x;
        answer++;
    }
    return answer;
}
