#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> land)
{
    //초기 값
    vector<int> score(4, 0);
    
    //점화식
    for(vector<int> row : land)
    {
        vector<int> score_next(4);
        for(int i = 0;i < 4;i++)
            score_next[i] = row[i] + max(score[(i + 1) % 4], max(score[(i + 2) % 4], score[(i + 3) % 4]));
        score = score_next;
    }
    
    //결과 값
    return max(max(score[0], score[1]), max(score[2], score[3]));
}
