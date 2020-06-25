#include <cstdio>
#include <algorithm>

int main()
{
  //입력
  int n,k;
  scanf("%d %d",&n,&k);
  int a=n/2,b=n/2;
  if(n%2) a++;
  
  //만약 a*b보다 값이 크면 안되는 case
  if(k>a*b)
  {
    printf("-1");
    return 0;
  }
  
  //k=0 이면, B를 모두 출력하면 됨
  if(k==0)
  {
    for(int i=0;i<n;i++) printf("B");
    return 0;
  }

  //a와 b를 줄여가면서 크기가 k보다 작아지지 않게끔 관리
  for(int i=0;i<n;i++)
  {
    bool flag=false;
    if(a*(b-1)>=k) b--,flag=true;
    if((a-1)*b>=k) a--,flag=true;
    if(!flag) break;
  }

  //cha만큼 B의 갯수를 앞으로 땡겨 출력
  int cha=a*b-k;
  for(int i=0;i<n-a-b;i++) printf("B");
  for(int i=1;i<a;i++) printf("A");
  for(int i=0;i<cha;i++) printf("B");
  printf("A");
  for(int i=0;i<b-cha;i++) printf("B");
  return 0;
}
