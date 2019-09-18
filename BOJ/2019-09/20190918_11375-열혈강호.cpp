#include <cstdio>

int n, m, k;
bool exist[1010][1010];

int match1[1010], match2[1010];
bool visit[1010];

bool isMatch(int x)
{
    if(visit[x]) return false;
    visit[x] = true;
    
    for(int y=0;y<m;y++)
    {
        if(exist[x][y])
        {
            if(match2[y] == -1 || isMatch(match2[y]))
            {
                match1[x] = y;
                match2[y] = x;
                
                return true;
            }
        }
    }
    
    return false;
}

int main()
{
    int cnt=0;
    
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        for(int j=0;j<k;j++)
        {
            int t;
            scanf("%d", &t);
            exist[i][t-1] = true;
        }
    }
    
    for(int i=0;i<n;i++) match1[i]=-1;
    for(int i=0;i<m;i++) match2[i]=-1;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) visit[j] = false;
        if(isMatch(i)) cnt++;
    }
    
    printf("%d",cnt);
    return 0;
}
