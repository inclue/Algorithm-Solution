#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    //소수 배열
    vector<int> prime;
    for(int i = 2;i <= n;i++)
    {
        //소수 여부
        bool check = true;
        
        for(int j : prime)
        {
            //sqrt(i) 까지만 비교하면 소수 여부 판별 가능
            if(j * j > i) break;
            
            //나누어 떨어지는 수가 있으면 소수가 아님
            if(i % j == 0)
            {
                check = false;
                break;
            }
        }
        
        //소수일 경우 소수 배열에 추가
        if(check) prime.push_back(i);
    }
    
    //소수의 갯수 출력
    return prime.size();
}
