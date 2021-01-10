#include <bits/stdc++.h>
using namespace std;

long long solution(int w,int h)
{
    //대각선과 겹치는 종이 : w + h - gcd(w, h)
    return (long long)w * h - (w + h - gcd(w, h));
}
