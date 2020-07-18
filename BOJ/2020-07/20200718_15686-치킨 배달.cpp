#include <bits/stdc++.h>

std::vector<std::pair<int,int> > zip;
std::vector<std::pair<int,int> > chick;
bool visit[101];
int res;
int n,m;

void dfs(int num,int cnt)
{
	if(num>chick.size()) return;
	if(cnt==m)
	{
		int ret=0;
		for(int i=0;i<zip.size();i++)
		{
			int dist=2100000000;
			for(int j=0;j<chick.size();j++)
			{
				if(visit[j]) //방문 예정인 치킨집에 대해서 거리 비교
				{
					int zx=zip[i].first, zy=zip[i].second;
					int cx=chick[j].first, cy=chick[j].second;
					dist=std::min(dist,std::abs(zx-cx)+std::abs(zy-cy));
				}
			}
			ret+=dist; //가장 가까운 치킨집과의 거리의 합 계산
		}
		res=std::min(res,ret); //최솟값 계산
	}
	else //치킨집 선택 여부
	{
		//선택 시
		visit[num]=true;
		dfs(num+1,cnt+1);
    
		//비선택 시
		visit[num]=false;
		dfs(num+1,cnt);
	}
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int t;
			scanf("%d",&t);
			if(t==1) zip.push_back(std::make_pair(i,j)); //집
			if(t==2) chick.push_back(std::make_pair(i,j)); //치킨집
		}
	}
  
	res=2100000000;
	dfs(0,0);
	
  printf("%d",res);
	return 0;
}
