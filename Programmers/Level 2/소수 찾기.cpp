#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
set<int> answer;

bool isPrime(int number)
{
    //0, 1인 경우 소수가 아님
    if(number < 2) return false;
    
    //소수 판별
    for(int i = 2;i * i <= number;i++)
    {
        if(number % i == 0) return false;
    }
    return true;
}

void dfs(int cnt, int number, string& numbers)
{
    //소수 여부 확인 후 set에 추가
    if(isPrime(number)) answer.insert(number);
    
    //다음에 추가할 숫자 구하기
    for(int i = 0;i < numbers.size();i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            dfs(cnt + 1, number * 10 + (numbers[i] - '0'), numbers);
            visited[i] = false;
        }
    }
}

int solution(string numbers)
{
    //visit 초기화
    visited.resize(numbers.size(), false);
    
    //dfs 돌리면서 갯수 세주기
    dfs(0, 0, numbers);
    
    return answer.size();
}
