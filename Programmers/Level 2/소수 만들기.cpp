#include <bits/stdc++.h>
using namespace std;

//소수 구하기
bool isPrime(int n)
{
    for(int i = 2;i * i <= n;i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums)
{
    int answer = 0;
    
    //3개의 수 구하기
    for(int i = 0;i < nums.size();i++)
    {
        for(int j = i + 1;j < nums.size();j++)
        {
            for(int k = j + 1;k < nums.size();k++)
            {
                //3개의 수의 합이 소수면 갯수 증가
                if(isPrime(nums[i] + nums[j] + nums[k])) answer++;
            }
        }
    }
    return answer;
}
