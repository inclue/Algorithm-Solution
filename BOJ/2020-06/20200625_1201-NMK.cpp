#include <cstdio>
#include <algorithm>

int main()
{
  //입력
  int n,m,k;
  scanf("%d %d %d",&n,&m,&k);
  
  //조건 밖의 범위면 -1 출력
  if(n>m*k || n<m+k-1)
  {
    printf("-1");
    return 0;
  }

  //첫 K개를 내림차순으로 출력
  for(int i=k;i>=1;i--) printf("%d ",i);

  //나머지 m-1개 묶음을 계산후 출력
  int cnt=k;
  int cha=n-k;
  for(int i=1;i<m;i++)
  {
    int seq=cha/(m-1);
    if(cha%(m-1)>=i) seq++;

    for(int i=cnt+seq;i>=cnt+1;i--) printf("%d ",i);
    cnt+=seq;
  }

  return 0;
}
