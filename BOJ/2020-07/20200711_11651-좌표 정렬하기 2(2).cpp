#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
  int n;
  scanf("%d",&n);

  std::vector<std::pair<int,int>> vec(n);
  for(int i=0;i<n;i++) scanf("%d %d",&vec[i].second,&vec[i].first);

  std::sort(vec.begin(),vec.end());
  for(int i=0;i<n;i++) printf("%d %d\n",vec[i].second,vec[i].first);
  return 0;
}
