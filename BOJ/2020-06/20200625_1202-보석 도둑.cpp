#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

int main() {
	//입력 및 정렬
  int n, k;
	scanf("%d %d",&n,&k);

  std::vector<std::pair<int,int>> jewel(n);
  for(int i=0;i<n;i++) scanf("%d %d",&(jewel[i].first),&(jewel[i].second));
  std::sort(jewel.begin(),jewel.end());

  std::vector<int> cost(k);
  for(int i=0;i<k;i++) scanf("%d",&cost[i]);
  std::sort(cost.begin(),cost.end());

  //가방 크기보다 작은 보석들을 차례대로 pq에 넣어주고, 가장 가치가 큰 것을 pop
  long long res=0;
  std::priority_queue<int> pq;
  for(int i=0,j=0;i<k;i++)
  {
    while(j<n && jewel[j].first<=cost[i]) pq.push(jewel[j++].second);

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
