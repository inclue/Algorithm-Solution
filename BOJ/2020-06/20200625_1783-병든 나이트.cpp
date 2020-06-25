#include <cstdio>
#include <algorithm>

int main()
{
  //입력
  int n,m;
  scanf("%d %d",&n,&m);

  //규칙에 따라 case 나눠서 출력
  if(n==1) printf("1");
  else if(n==2) printf("%d",std::min((m-1)/2+1,4));
  else if(m<7) printf("%d",std::min(m,4));
  else printf("%d",m-2);
  return 0;
}
