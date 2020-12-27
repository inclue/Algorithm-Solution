#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
    
    //각 element 별로 divisor로 나누어 떨어지는 지 확인
    for(int num : arr)
    {
        if(num % divisor == 0) answer.push_back(num);
    }
    
    //나누어 떨어지는 element가 하나도 없는 경우
    if(answer.size() == 0) answer.push_back(-1);
    
    //오름차순으로 정렬
    sort(answer.begin(), answer.end());
    return answer;
}
