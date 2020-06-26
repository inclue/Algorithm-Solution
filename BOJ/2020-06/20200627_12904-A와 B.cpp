#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  //입력
  std::string str1,str2;
  std::cin>>str1>>str2;

  //되추적 : A - 제거, B - 제거 후 뒤집기
  int front=0,back=str2.size()-1;
  bool isSwap=false;
  while(back-front>=str1.size())
  {
    if(isSwap)
    {
      if(str2[front]=='B') isSwap=false;
      front++;
    }
    else
    {
      if(str2[back]=='B') isSwap=true;
      back--;
    }
  }
  
  //str3에 되추적 결과 저장
  std::string str3=str2.substr(front,back-front+1);
  if(isSwap) std::reverse(str3.begin(),str3.end());

  //str1과 str3 비교
  std::cout<<(str1==str3?'1':'0');
  return 0;
}
