#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers)
{
    //두 수를 뽑아서 더한 값을 저장
    vector<int> answer;
    for(int i=0;i<numbers.size();i++)
    {
        for(int j=i+1;j<numbers.size();j++)
            answer.push_back(numbers[i]+numbers[j]);
    }
    
    //정렬 후 중복 제거
    std::sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    return answer;
}
