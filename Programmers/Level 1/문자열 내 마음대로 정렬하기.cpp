#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> strings, int n)
{
    sort(strings.begin(), strings.end(), [&n](auto a, auto b) {
        if(a[n] != b[n]) return a[n] < b[n]; //인덱스 n번째 글자 기준으로 정렬
        return a < b; //인덱스 n번째 글자가 같을 경우, 사전순으로 정렬
    });
    return strings;
}
