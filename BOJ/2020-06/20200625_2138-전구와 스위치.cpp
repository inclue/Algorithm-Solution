#include <cstdio>
#include <cstring>
#include <algorithm>

int n;
char now1[101010];
char now2[101010];
char res[101010];

int main()
{
    //입력
    int cnt1=0,cnt2=1;
    scanf("%d",&n);
    scanf("%s",now1);
    scanf("%s",res);
    strcpy(now2,now1);
    
    //now1 : 첫 스위치를 누르지 않은 경우
    for(int i=0;i<n-1;i++)
    {
        if(now1[i]!=res[i])
        {
            cnt1++;
            for(int j=0;j<3;j++) now1[i+j]= 1-(now1[i+j]-'0')+'0';
        }
    }
    if(now1[n-2]!=res[n-2] || now1[n-1]!=res[n-1]) cnt1=-1;
    
    //now2 : 첫 스위치를 누른 경우
    now2[0]= 1-(now2[0]-'0')+'0';
    now2[1]= 1-(now2[1]-'0')+'0';
    for(int i=0;i<n-1;i++)
    {
        if(now2[i]!=res[i])
        {
            cnt2++;
            for(int j=0;j<3;j++) now2[i+j]= 1-(now2[i+j]-'0')+'0';
        }
    }
    if(now2[n-2]!=res[n-2] || now2[n-1]!=res[n-1]) cnt2=-1;
    
    //결과 출력 : cnt1, cnt2 확인
    if(cnt1==-1 && cnt2==-1) printf("-1");
    else if(cnt1!=-1 && cnt2==-1) printf("%d",cnt1);
    else if(cnt1==-1 && cnt2!=-1) printf("%d",cnt2);
    else printf("%d",std::min(cnt1,cnt2));
    
    return 0;
}
