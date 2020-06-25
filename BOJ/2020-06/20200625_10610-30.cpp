#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

char temp[101010];
int main()
{
  //입력 및 자리수 분리
  scanf("%s",temp);

  int n=strlen(temp);
  std::vector<int> zari;
  for(int i=0;i<n;i++) zari.push_back(temp[i]-'0');

  //0이 있는지 여부, 자리수 합 계산
  int cnt=0;
  bool isZero=false;
  for(int p:zari)
  {
    if(p) cnt+=p;
    else isZero=true;
  }

  //0이 있고, 자리수 합이 3의 배수면 30의 배수를 만들 수 있음
  if(isZero && !(cnt%3))
  {
    std::sort(zari.begin(),zari.end());
    std::reverse(zari.begin(),zari.end());
    for(int p:zari) printf("%d",p);
  }
  else printf("-1");
  return 0;
}
