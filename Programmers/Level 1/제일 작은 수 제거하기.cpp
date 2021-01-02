#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int idx = 0;
    
    //제일 작은 수의 인덱스 찾기
    for(int i = 0;i < arr.size();i++)
    {
        if(arr[idx] > arr[i]) idx = i;
    }
    
    //제일 작은 수만 제거하기
    for(int i = 0;i < arr.size();i++)
    {
        if(i == idx) continue;
        else answer.push_back(arr[i]);
    }
        
    //리턴하려는 배열이 빈 배열인 경우
    if(answer.empty()) answer.push_back(-1);
    return answer;
}
