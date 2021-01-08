#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    //결과 행렬 초기화
    int a = arr1.size(), b = arr2.size(), c = arr2[0].size();
    vector<vector<int>> answer(a, vector<int>(c, 0));
    
    //결과 행렬 값 계산
    for(int i = 0;i < a;i++)
    {
        for(int j = 0;j < c;j++)
        {
            for(int k = 0;k < b;k++) answer[i][j] += (arr1[i][k] * arr2[k][j]);
        }
    }
    return answer;
}
