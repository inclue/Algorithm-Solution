#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;

//한 네트워크 안의 모든 컴퓨터 방문
void dfs(int x, int& n, vector<vector<int>> com)
{
    visited[x] = true;
    for(int i = 0;i < n;i++)
    {
        if(com[x][i] && !visited[i]) dfs(i, n, com);
    }
}

int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;
    visited.resize(n, false);
    
    for(int i = 0;i < n;i++)
    {
        //방문하지 않은 네트워크일 경우 방문
        if(!visited[i]) dfs(i, n, computers), answer++;
    }
    return answer;
}
