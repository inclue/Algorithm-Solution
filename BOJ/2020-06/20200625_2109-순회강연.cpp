#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

int main()
{
  //입력 및 예외처리
  int n;
  scanf("%d",&n);
  if(n==0)
  {
    printf("0");
    return 0;
  }

  //강의를 d 내림차순으로 정렬
  std::vector<std::pair<int,int>> lec(n);
  for(int i=0;i<n;i++) scanf("%d %d",&(lec[i].first),&(lec[i].second));
  std::sort(lec.begin(),lec.end(),
    [](std::pair<int,int> a, std::pair<int,int> b){ return a.second>b.second; });
  
  //i를 가장큰 것부터 돌리면서 pq에 넣고, 가장 큰 p를 pop
  long long res=0;
  std::priority_queue<int> pq;
  for(int i=lec[0].second,j=0;i>=1;i--)
  {
    while(j<n && lec[j].second==i) pq.push(lec[j++].first);

    if(!pq.empty())
    {
      res+=pq.top();
      pq.pop();
    }
  }

  //출력
  printf("%lld",res);
  return 0;
}
