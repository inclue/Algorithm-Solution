#include <bits/stdc++.h>

int n,m;
int map[10][10];
std::vector<std::pair<int,int>> cam;
bool view[10][4];
std::vector<int> dir;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int res;

void dfs(int x)
{
    if(x==cam.size())
    {
        int len=cam.size();
        bool check[10][10]={false,};
        
        for(int i=0;i<len;i++)
        {
            //위치와 기본방향 확인
            int x=cam[i].first;
            int y=cam[i].second;
            int od=dir[i];
            
            //방향 확인해주면서 벽이나 끝지점까지 모두 check 바꿔주기
            check[x][y]=true;
            for(int j=0;j<4;j++)
            {
                if(!view[i][j]) continue;
                int nd=(od+j)%4;
                for(int j=1;;j++)
                {
                    int nx=x+j*dx[nd];
                    int ny=y+j*dy[nd];
                    if(nx<0 || nx>=n || ny<0 || ny>=m) break;
                    if(map[nx][ny]==6) break;
                    check[nx][ny]=true;
                }
            }
        }
        
        //결과 계산 & 최솟값 확인
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!check[i][j] && map[i][j]!=6) cnt++;
            }
        }
        res=std::min(res,cnt);
        return;
    }
    for(int i=0;i<4;i++) //카메라 기본 방향 설정
    {
        dir.push_back(i);
        dfs(x+1);
        dir.pop_back();
    }
}

int main()
{
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&map[i][j]);
            if(map[i][j]>=1 && map[i][j]<=5) //카메라일 경우 view 조건 넣어주기
            {
                int cnt=cam.size();
                cam.push_back(std::make_pair(i,j));
                if(map[i][j]==1) view[cnt][0]=true;
                if(map[i][j]==2) view[cnt][0]=true,view[cnt][2]=true;
                if(map[i][j]==3) view[cnt][0]=true,view[cnt][1]=true;
                if(map[i][j]==4) view[cnt][0]=true,view[cnt][1]=true,view[cnt][2]=true;
                if(map[i][j]==5) view[cnt][0]=true,view[cnt][1]=true,view[cnt][2]=true,view[cnt][3]=true;
            }
        }
    }
    
    res=n*m;
    dfs(0);
    
    printf("%d",res);
    return 0;
}
