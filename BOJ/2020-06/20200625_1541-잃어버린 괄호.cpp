#include <cstdio>
#include <cstring>

int main()
{
  //입력
  char sik[55];
  int su=0,res=0;
  bool flag=false;
  scanf("%s",sik);

  //-가 나오기 전까지는 모든 값 +, 최소가 되야되므로 -가 나온 이후로는 모두 -를 해주면 됨.
  for(int i=0;i<strlen(sik);i++)
  {
    if(sik[i]=='-' || sik[i]=='+')
    {
      res=(flag?res-su:res+su);
      if(sik[i]=='-' && !flag) flag=true;
      su=0;
    }
    else su=su*10+(sik[i]-'0');
  }

  //마지막 확인 후 res 값 출력
  if(flag) printf("%d",res-su);
  else printf("%d",res+su);
  return 0;
}
