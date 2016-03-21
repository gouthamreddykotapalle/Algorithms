#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m,k,min,ans;
    cin>>t;
    while(t--)
    {
 	cin>>n;
        cin>>m;
        cin>>k;
        min=abs(n-m);
        if(min<=k)
        {
            cout<<0<<endl;
        }
        else
        {
        	ans=min-k;
            cout<<ans<<endl;
        }
    }
    return 0;
} 
