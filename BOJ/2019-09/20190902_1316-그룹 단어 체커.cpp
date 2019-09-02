#include <cstdio>
#include <cstring>

int main()
{
    int n;
    int cnt = 0;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
    {
        int check[26] = {0,};
        char word[101];
        
        scanf("%s", word);
        for(int j=0;j<strlen(word);j++)
        {
            if(word[j] != word[j+1])
            {
                check[(word[j]-'a')]++;
            }
        }
        
        bool flag = false;
        for(int j=0;j<26;j++)
        {
            if(check[j] > 1)
            {
                flag = true;
                break;
            }
        }
        
        if(flag == false) cnt++;
    }
    
    printf("%d",cnt);
    return 0;
}
