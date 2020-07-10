#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
  int n;
  scanf("%d",&n);

  std::vector<int> cnt(10101);
  for(int i=0;i<n;i++)
  {
    int t;
    scanf("%d",&t);
    cnt[t]++;
  }

  for(int i=1;i<=10000;i++)
  {
    for(int j=0;j<cnt[i];j++) printf("%d\n",i);
  }
  return 0;
}
