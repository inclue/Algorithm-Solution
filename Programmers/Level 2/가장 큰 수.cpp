#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> numbers)
{
    //숫자 string으로 변환
    bool only_zero = true;
    vector<string> string_numbers;
    for(int num : numbers)
    {
        string_numbers.push_back(to_string(num));
        if(num) only_zero = false;
    }
    
    //모든 numbers가 0일 경우 예외처리
    if(only_zero) return "0";
    
    //정렬
    sort(string_numbers.begin(), string_numbers.end(), [](string& a, string& b) {
        return a + b > b + a;
    });
    
    //정답 출력
    string answer = "";
    for(string string_number : string_numbers) answer += string_number;
    return answer;
}
