#include <cstdio>
#include <algorithm>

int n;
char st[22][22];

int main()
{
  //입력
  int res=404;
  scanf("%d",&n);
  for(int i=0;i<n;i++) scanf("%s",st[i]);

  //bitmask로 해당 행을 뒤집을지 여부 결정
  for(int i=0;i<(1<<n);i++)
  {
    int hap=0;
    
    //for문 돌면서 T갯수 확인하기
    for(int j=0;j<n;j++)
    {
      int cnt=0;
      for(int k=0;k<n;k++)
      {
        if((1<<k)&i && st[j][k]=='H') cnt++; //H인데 뒤집히는 경우
        if(!((1<<k)&i) && st[j][k]=='T') cnt++; //T인데 뒤집히지 않는 경우
      }
      hap+=std::min(cnt,n-cnt); //열단위를 뒤집는게 좋을지, 안뒤집는게 좋을지
    }
    res=std::min(res,hap); //결과값 갱신
  }
  
  //출력
  printf("%d",res);
  return 0;
}
