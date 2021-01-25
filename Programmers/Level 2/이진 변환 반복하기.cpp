#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s)
{
    //문자열을 숫자 배열로 변경
    vector<int> num;
    for(char ch : s) num.push_back(ch - '0');
    
    vector<int> answer(2, 0);
    while(num.size() != 1)
    {
        //1의 갯수 세주기
        int cnt = 0;
        for(int su : num)
        {
            if(su == 1) cnt++;
        }
        
        //결과값 갱신
        answer[0]++;
        answer[1] += (num.size() - cnt);
        
        //이진 변환하기
        num.resize(0);
        while(cnt)
        {
            num.push_back(cnt % 2);
            cnt /= 2;
        }
    }
    return answer;
}
