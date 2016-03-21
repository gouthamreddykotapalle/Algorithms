#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld\n",a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll check(vector<vector<ll> >);

int main()
{
	
	ll i,t,n,c,p,a,sum,f;
	get(t);
	while(t--)
	{
		
		get(n);
		sum=0;
		for(i=1;i<=n;i++)
		{
			sum+=(((i-1)*2)+1);		
			
		}
		//cout<<sum<<endl;
	    for(i=n;i>=2;i--) 
	    {
	    	sum+=(i-1);
	    	a=(n-i-1);
	    	if(a>0)
	    	sum+=a;
	    	
	    }
	    //cout<<sum<<endl;
	    if(n>3)
	    {
	    
	    for(i=n-1;i>=3;i--)
	    {
	    	sum+=(i-1);
	    }
	    
	     for(i=n-1;i>3;i--)
	    {
	    	sum+=(i-2);
	    }
	    
	    }
	    //cout<<sum<<endl;
		put(sum+(n-2));
		
	}
}
