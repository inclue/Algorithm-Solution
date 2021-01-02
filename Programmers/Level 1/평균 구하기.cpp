#include <bits/stdc++.h>
using namespace std;

double solution(vector<int> arr)
{
    //정수들의 합 구하기
    int sum = 0;
    for(int num : arr) sum += num;
    
    //평균 출력
    return (double)sum / arr.size();
}
