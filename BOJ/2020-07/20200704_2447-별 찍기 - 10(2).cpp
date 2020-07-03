#include <cstdio>

int main()
{
	int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      int ti=i,tj=j;
      while(true)
      {
        if(ti==0 && tj==0) //3진법으로 바꿨을 때 1이 아예 없는 경우
        {
          printf("*");
          break;
        }
        if(ti%3==1 && tj%3==1) //3진법으로 바꿨을 때 1인 경우
        {
          printf(" ");
          break;
        }
        ti/=3,tj/=3; //다음 자리수로 넘어 가기
      }
    }
    printf("\n");
  }
	return 0;
}
