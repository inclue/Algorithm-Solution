#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
  int n;
  scanf("%d",&n);

  std::vector<std::pair<int,int>> vec(n);
  for(int i=0;i<n;i++) scanf("%d %d",&vec[i].first,&vec[i].second);

  std::sort(vec.begin(),vec.end(),[](auto x,auto y) { return (x.second==y.second ? x.first<y.first : x.second<y.second); });
  for(int i=0;i<n;i++) printf("%d %d\n",vec[i].first,vec[i].second);
  return 0;
}
