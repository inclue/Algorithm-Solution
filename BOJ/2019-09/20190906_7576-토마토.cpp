#include <cstdio>
#include <queue>
#include <algorithm>

struct state {
    int x;
    int y;
    int cnt;
};

int n, m;
int tomato[1010][1010];
std::queue<state> q;

int main()
{
    int cnt=0;
	scanf("%d %d", &m, &n);
	for (int i = 0;i < n;i++) {
		for(int j = 0;j < m;j++) {
		    scanf("%d",&tomato[i][j]);
		    if(tomato[i][j]==1)
		    {
		        state t;
		        t.x = i;
		        t.y = j;
		        t.cnt = 0;
		        q.push(t);
		    }
		}
	}
	
	while(!q.empty())
	{
	    state t = q.front();
	    cnt = t.cnt;
	    
	    //printf("%d %d %d\n",t.x,t.y,t.cnt);
	    
	    if(t.x>0 && tomato[t.x-1][t.y]==0)
	    {
	        tomato[t.x-1][t.y]=1;
	        state newt;
	        newt.x = t.x-1;
	        newt.y = t.y;
	        newt.cnt = t.cnt+1;
	        q.push(newt);
	    }
	    if(t.x<n-1 && tomato[t.x+1][t.y]==0)
	    {
	        tomato[t.x+1][t.y]=1;
	        state newt;
	        newt.x = t.x+1;
	        newt.y = t.y;
	        newt.cnt = t.cnt+1;
	        q.push(newt);
	    }
	    if(t.y>0 && tomato[t.x][t.y-1]==0)
	    {
	        tomato[t.x][t.y-1]=1;
	        state newt;
	        newt.x = t.x;
	        newt.y = t.y-1;
	        newt.cnt = t.cnt+1;
	        q.push(newt);
	    }
	    if(t.y<m-1 && tomato[t.x][t.y+1]==0)
	    {
	        tomato[t.x][t.y+1]=1;
	        state newt;
	        newt.x = t.x;
	        newt.y = t.y+1;
	        newt.cnt = t.cnt+1;
	        q.push(newt);
	    }
	    q.pop();
	}
	
	bool flag = true;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        if(tomato[i][j]==0)
	        {
	            flag=false;
	            break;
	        }
	    }
	}
	
	if(flag) printf("%d",cnt);
	else printf("-1");
	
	return 0;
}
