#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
  //입력
  int n;
  scanf("%d",&n);

  std::vector<int> arr(n);
  for(int i=0;i<n;i++) scanf("%d",&arr[i]);

  //lower_bound를 이용하여 res에서 index를 찾고, 해당 위치에 값 삽입 or 수정
  std::vector<int> res;
  for(int i=0;i<n;i++)
  {
    int idx = std::lower_bound(res.begin(),res.end(),arr[i])-res.begin();
    if(idx==res.size()) res.push_back(arr[i]);
    else res[idx]=arr[i];
  }

  //출력
  printf("%d",res.size());
  return 0;
}
