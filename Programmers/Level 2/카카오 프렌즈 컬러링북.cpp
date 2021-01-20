#include <bits/stdc++.h>
using namespace std;

//BFS로 영역의 크기 찾기
int bfs(int x, int y, int m, int n, vector<vector<bool>>& visited, vector<vector<int>>& picture)
{
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    
    int ret = 1;
    int col = picture[x][y];
    
    queue<pair<int, int>> que;
    que.push({x, y});
    visited[x][y] = true;
    
    while(!que.empty())
    {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        
        for(int i = 0;i < 4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n || visited[nx][ny] || picture[nx][ny] != col) continue;
            
            que.push({nx, ny});
            visited[nx][ny] = true;
            ret++;
        }
    }
    return ret;
}

vector<int> solution(int m, int n, vector<vector<int>> picture)
{
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            //방문하지 않은 영역인지 체크
            if(picture[i][j] != 0 && !visited[i][j])
            {
                //영역의 갯수 증가, 최대 영역 크기 갱신
                number_of_area++;
                max_size_of_one_area = max(max_size_of_one_area, bfs(i, j, m, n, visited, picture));
            }
        }
    }
    
    //결과 출력
    vector<int> answer;
    answer.push_back(number_of_area);
    answer.push_back(max_size_of_one_area);
    return answer;
}
