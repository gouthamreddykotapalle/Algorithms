#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        if(n%2==0)
            printf("%lld\n",((n)*(n+2)*(2*n+1))/8);
        else
            printf("%lld\n",((n)*(n+2)*(2*n+1)-1)/8);
                
    }
} 
