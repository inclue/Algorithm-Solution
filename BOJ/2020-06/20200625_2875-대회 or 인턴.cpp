#include <cstdio>
#include <algorithm>

int main()
{
  //입력
  int n,m,k;
  scanf("%d %d %d",&n,&m,&k);

  //k=0 될때까지 n과 m*2를 비교하여 하나씩 감소
  for(;k>0;k--)
  {
    if(n>m*2) n--;
    else m--;
  }
  
  //출력
  printf("%d",std::min(n/2,m));
}
