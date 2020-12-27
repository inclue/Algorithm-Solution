#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    sort(s.begin(), s.end()); //ASCII 코드값 기준 오름차순 정렬
    reverse(s.begin(), s.end()); //내림차순으로 바꾸기 위해 reverse
    return s;
}
