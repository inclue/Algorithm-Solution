#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    for(vector<int> command : commands)
    {
        //배열 자르기
        vector<int> temp;
        temp.assign(array.begin() + command[0] - 1, array.begin() + command[1]);
        
        //배열 정렬
        sort(temp.begin(), temp.end());
        
        //결과 저장
        answer.push_back(temp[command[2] - 1]);
    }
    return answer;
}
