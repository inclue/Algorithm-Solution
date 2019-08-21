#include <stdio.h>
 
int main()
{
    int T;
    int a,b,c,d;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        printf("#%d ",i+1);
        if(a*d > b*c) printf("ALICE\n");
        else if(a*d < b*c) printf("BOB\n");
        else printf("DRAW\n");
    }
    return 0;
}
