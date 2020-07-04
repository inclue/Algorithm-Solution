#include <cstdio>

char res[2222][2222];

void divcon(int sx,int ex,int sy,int ey,bool check)
{
  if(sx+1==ex && sy+1==ey) //크기가 1*1인 경우
  {
    res[sx][sy]=(check?'*':' ');
    return;
  }

  //9개 구역으로 나누기
  int x1=(2*sx+ex)/3,x2=(sx+2*ex)/3;
  int y1=(2*sy+ey)/3,y2=(sy+2*ey)/3;
  divcon(sx,x1,sy,y1,check);
  divcon(sx,x1,y1,y2,check);
  divcon(sx,x1,y2,ey,check);
  divcon(x1,x2,sy,y1,check);
  divcon(x1,x2,y1,y2,false); //중앙은 무조건 빈칸
  divcon(x1,x2,y2,ey,check);
  divcon(x2,ex,sy,y1,check);
  divcon(x2,ex,y1,y2,check);
  divcon(x2,ex,y2,ey,check);
}


int main()
{
  int n;
  scanf("%d",&n);
  divcon(0,n,0,n,true);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++) printf("%c",res[i][j]);
    printf("\n");
  }
	return 0;
}
