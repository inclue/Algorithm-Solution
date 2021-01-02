#include <bits/stdc++.h>
using namespace std;

long long solution(long long n)
{
    //자릿수 분리
    vector<long long> zari;
    while(n)
    {
        zari.push_back(n % 10);
        n /= 10;
    }
    
    //내림차순 정렬
    sort(zari.begin(), zari.end());
    reverse(zari.begin(), zari.end());
    
    //정답 출력
    long long answer = 0;
    for(int x : zari) answer = (answer * 10) + x;
    return answer;
}
