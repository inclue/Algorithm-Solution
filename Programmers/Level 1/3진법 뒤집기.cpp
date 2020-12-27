#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    //3진법 변환
    vector<int> three;
    while(n)
    {
        three.push_back(n % 3);
        n /= 3;
    }
    
    //앞뒤 반전
    reverse(three.begin(), three.end());
    
    //10진법으로 표현
    int answer = 0;
    for(int i = 0, gop = 1;i < three.size();i++, gop *= 3)
    {
        answer += (gop * three[i]);
    }
    return answer;
}
