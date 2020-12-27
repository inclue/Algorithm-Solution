#include <bits/stdc++.h>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer;
    for(int i = 0;i < n;i++)
    {
        answer.push_back("");
        for(int j = 0;j < n;j++)
        {
            //arr1과 arr2에서 둘다 벽인지 확인
            if((arr1[i] & 1) || (arr2[i] & 1)) answer[i].push_back('#');
            else answer[i].push_back(' ');
            
            //다음 위치로 넘어감
            arr1[i] >>= 1, arr2[i] >>= 1;
        }

        //밑의 자리수 부터 answer에 넣었으므로 뒤집기
        reverse(answer[i].begin(), answer[i].end());
    }
    return answer;
}
