#include <bits/stdc++.h>
using namespace std;

//방향 벡터 설정
int dx[3] = {1, 0, -1}, dy[3] = {0, 1, -1};

vector<int> solution(int n)
{
    //삼각형 모양 정의
    vector<vector<int>> tri;
    for(int i = 0;i < n;i++)
    {
        vector<int> temp(i + 1, 0);
        tri.push_back(temp);
    }
    
    //삼각형 채워넣기
    int nx = 0, ny = 0, cnt = 1, dir = 0;
    while(cnt <= n * (n + 1) / 2)
    {
        tri[nx][ny] = cnt++;
        
        int tx = nx + dx[dir], ty = ny + dy[dir];
        if(tx < 0 || tx >= n || ty < 0 || ty >= n || tx < ty || tri[tx][ty])
            dir = (dir + 1) % 3;
        nx += dx[dir], ny += dy[dir];
    }
    
    //삼각형 배열을 새로운 배열로 변경
    vector<int> answer;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j <= i;j++) answer.push_back(tri[i][j]);
    }
    return answer;
}
