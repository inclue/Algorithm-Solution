#include <cstdio>
#include <vector>

int n, m, k;
bool exist[1010][1010];

std::vector<int> match1, match2;
std::vector<int> visit;

bool isMatch(int x)
{
    if(visit[x]==2) return false;
    visit[x]++;
    
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
    
    match1 = std::vector<int>(n, -1);
    match2 = std::vector<int>(m, -1);
    
    for(int i=0;i<n;i++)
    {
        visit = std::vector<int>(n, 0);
        if(isMatch(i)) cnt++;
        if(isMatch(i)) cnt++;
    }
    
    printf("%d",cnt);
    return 0;
}
