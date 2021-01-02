#include <bits/stdc++.h>
using namespace std;

string solution(string phone_number)
{
    string answer;
    
    //뒷 4자리 제외하고 다 *로 가리기
    for(int i = 0;i < phone_number.size() - 4;i++) answer.push_back('*');
    
    //뒷 4자리 출력
    answer += phone_number.substr(phone_number.size() - 4);
    
    return answer;
}
