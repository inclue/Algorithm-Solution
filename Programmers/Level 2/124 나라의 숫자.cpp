#include <bits/stdc++.h>
using namespace std;

string solution(int n)
{
    //124 나라에서 사용하는 숫자의 자릿수 구하기
    int cnt = 0;
    for(int i = 1;i <= n;i *= 3) n -= i, cnt++;
    
    //각 숫자를 3으로 나눈 나머지로 분해
    vector<int> mod(cnt, 0);
    for(int i = 0;n > 0;i++)
    {
        mod[i] = n % 3;
        n /= 3;
    }
    reverse(mod.begin(), mod.end());
    
    //나머지 0 : '1', 1 : '2', 2 : '4'로 mapping
    string answer = "";
    for(int x : mod)
    {
        if(x == 0) answer.push_back('1');
        else if(x == 1) answer.push_back('2');
        else answer.push_back('4');
    }
    return answer;
}
