#include <cstdio>

int main()
{
    int n;
    int max = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int num;
        scanf("%d", &num);
        if(max < num) max = num;
    }
    printf("%d", max);
    return 0;
}
