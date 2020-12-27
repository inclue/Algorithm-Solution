#include <bits/stdc++.h>
using namespace std;

string solution(int a, int b) {
    int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string res[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    //X월 X일을 X번째 일자로 변환
    int day = b;
    for(int i = 0;i < a;i++) day += month[i];
    
    //나머지를 이용한 요일 계산
    return res[(day + 4) % 7];
}
