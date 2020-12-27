#include <bits/stdc++.h>
using namespace std;

long long solution(int a, int b)
{
    if(a > b) std::swap(a, b);
    
    long long ahap = (long long)a * (a - 1) / 2; //1 ~ a-1 까지의 합
    long long bhap = (long long)b * (b + 1) / 2; //1 ~ b 까지의 합
    
    long long answer = bhap - ahap;
    return answer;
}
