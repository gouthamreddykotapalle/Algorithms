#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,a,b,j;
    char s[5001];
    scanf("%d",&t);
    while(t--)
    {
        a=b=0;
        scanf("%s",&s);
        for(i=0;s[i];i++)
        {
            if(s[i]=='A')
                a++;
            else
                b++;
        }
        if(a==2)
            printf("A\n");
        else if(b==2)
            printf("B\n");
        else
        {
            for(i=1;s[i];i++)
            {
                if(s[i]==s[i-1])
                {
                    if(s[i+1]=='\0' || s[i+1]!=s[i])
                    {
                        break;
                    }
                    else
                    {
                        j=i+1;
                        while(s[i]==s[j])
                        {
                            j++;
                        }
                        i=j;
                    }
                }
            }
            if(s[i])
            {
                for(j=0;s[j];j++)
                {
                    if(j!=i)
                        printf("%c",s[j]);
                }
                printf("\n");
            }
            else
                printf("-1\n");
        }
    }
    return 0;
}
 
