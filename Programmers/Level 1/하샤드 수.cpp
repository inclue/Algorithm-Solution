#include <bits/stdc++.h>
using namespace std;

bool solution(int x)
{
    //x 값 복사
    int num = x;
    
    //x의 자리수 합 구하기
    int zari = 0;
    while(x)
    {
        zari += (x % 10);
        x /= 10;
    }
    
    //결과 출력
    return num % zari == 0;
}
