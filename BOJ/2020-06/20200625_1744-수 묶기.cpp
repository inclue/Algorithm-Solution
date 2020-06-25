#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
  //입력 및 수 정렬
  int n;
  scanf("%d",&n);

  std::vector<int> su(n);
  std::vector<bool> check(n,false);
  for(int i=0;i<n;i++) scanf("%d",&su[i]);
  std::sort(su.begin(),su.end());

  //1보다 큰 값들을 서로 곱해줌
  long long res=0;
  for(int i=0;i<n-1;i+=2)
  {
    if(su[i]<1 && su[i+1]<1)
    {
      res+=(su[i]*su[i+1]);
      check[i]=true,check[i+1]=true;
    }
    else break;
  }

  //1보다 작은 값들을 서로 곱해줌
  for(int i=n-1;i>=0;i-=2)
  {
    if(su[i]>1 && su[i-1]>1)
    {
      res+=(su[i]*su[i-1]);
      check[i]=true,check[i-1]=true;
    }
    else break;
  }

  //남은 값들은 더해줌
  for(int i=0;i<n;i++)
  {
    if(!check[i]) res+=su[i];
  }

  //출력
  printf("%lld",res);
  return 0;
}
