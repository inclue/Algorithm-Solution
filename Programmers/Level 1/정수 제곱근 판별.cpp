#include <bits/stdc++.h>
using namespace std;

long long solution(long long n)
{
    //제곱근의 정수 부분 = x
    long long x = (long long)sqrt(n);
    
    //x의 제곱이 n이면 (x + 1)의 제곱 출력, 아니면 -1 출력
    if(x * x == n) return (x + 1) * (x + 1);
    else return -1;
}
