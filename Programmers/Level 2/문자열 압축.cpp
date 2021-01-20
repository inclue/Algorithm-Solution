#include <bits/stdc++.h>
using namespace std;

int solution(string s)
{
    int answer = 2100000000;
    for(int unit = 1;unit <= s.size();unit++)
    {
        //unit 단위로 자른 뒤에 더 짧은 문자열로 표기 가능한 지 확인
        string prev;
        int length = 0, cnt = 1;
        for(int i = 0;i < s.size();i += unit)
        {
            string now = s.substr(i, unit);
            if(prev == now) cnt++;
            else
            {
                if(cnt > 1) length += to_string(cnt).size();
                length += now.length(), cnt = 1;
            }
            prev = now;
        }
        if(cnt > 1) length += to_string(cnt).size();
        
        //최솟값 갱신
        answer = min(answer, length);
    }
    return answer;
}
