#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<string>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld\n",a)
#define ll long long
#define pb push_back
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
ll calc(ll,ll,vector<ll>,vector<ll>,ll);

int main()
{
	BOOST;
	ll sum,max,maxi,i,t,n,k,x,a1;
	get(t);
	bool flag;
	
	while(t--)
	{
	  vector<ll> a,b;
	  get(n);get(k);
	  for(i=0;i<n;i++)
	  {
	  	get(x);
	  	a.pb(x);
	  }
	  
	  for(i=0;i<n;i++)
	  {
	  	get(x);
	  	b.pb(x);
	  }
	
	  max=-9999999999;
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]*b[i]>0)
	  	{
	  		if(a[i]<0)
	  		{
	  			a1=calc(-k,i,a,b,n);
			  	if(a1>max)
			  	{
			  		max=a1;
			  	}
			  	
         	}
         	
         	else
         	{
         		a1=calc(k,i,a,b,n);
			  	if(a1>max)
			  	{
			  		max=a1;
			  	}
         		
         	}
         	
	    }
	    else
	    {
	    	if(a[i]<0&&b[i]>0)
	    	a1=calc(k,i,a,b,n);
	    		if(a1>max)
			  	{
			  		max=a1;
			  	}
			  	else 
			  	a1=calc(-k,i,a,b,n);
	    		if(a1>max)
			  	{
			  		max=a1;
			  	}
	    	
	    	
	    }
	    
	  }
	  
	  
	  put(max);
		
		
	}
	
	
	
	
}

ll calc(ll t,ll i, vector<ll> s,vector<ll> p,ll n)
{
	ll sum=0;
	s[i]=s[i]+t;
	for(ll k=0;k<n;k++)
	  {
	  	sum+=s[k]*p[k];
	  	
	  }
//	cout<<sum<<"\n"<<i<<t<<endl;
	return sum;
}
