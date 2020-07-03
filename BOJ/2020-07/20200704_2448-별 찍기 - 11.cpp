#include <cstdio>
#include <string>
#include <cmath>

std::string star[3]={"*","* *","*****"};

void draw(int depth, int line)
{
  if(depth==0)
  {
    printf("%s",star[line].c_str());
    return;
  }

  int call_line=line-3*pow(2,depth-1); //다음 단계 크기 계산
  if(call_line<0) draw(depth-1,line); //line 크기가 작은 경우 depth만 감소시킴
  else
  {
    draw(depth-1,call_line); //왼쪽 별찍기
    for(int i=1;i<6*pow(2,depth)-2*line;i++) printf(" "); //가운데 공백
    draw(depth-1,call_line); //오른쪽 별찍기
  }
}


int main()
{
  int n;
  scanf("%d",&n);

  int level=0;
  for(int i=0;i<n;i++)
  {
    if(i>=3*pow(2,level)) level++; //다음 단계로 변경

    for(int j=1;j<n-i;j++) printf(" "); //전체 좌측 빈칸
    draw(level,i); //가운데 별찍기
    for(int j=1;j<n-i;j++) printf(" "); //전체 우측 빈칸
    printf("\n");
  }
	return 0;
}
