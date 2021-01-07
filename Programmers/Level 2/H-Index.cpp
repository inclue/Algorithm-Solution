#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> citations)
{
    //오름차순으로 정렬
    sort(citations.begin(), citations.end());

    int answer = 0;
    for(int h = 0;h <= 10000;h++)
    {
        //h번 이상 인용된 논문 수 : citations.size() - idx
        int idx = lower_bound(citations.begin(), citations.end(), h) - citations.begin();
        if(h <= citations.size() - idx) answer = h;
        else break;
    }
    return answer;
}
