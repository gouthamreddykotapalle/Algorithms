#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll sum(ll,ll,ll,vector<ll>,vector<ll>);

int main()
{
	
	ll i,j,n,x,max,f;
	vector<ll> a,b;	
	get(n);
		
		for(i=0;i<n;i++)
		{
			cin>>x;
			a.pb(x);
		}
		for(i=0;i<n;i++)
		{
			cin>>x;
			b.pb(x);
		}
		
		max=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			f=sum(i,j,n,a,b);
			if(max<f)
				max=f;
		}	
		}
		printf("%lld\n",max);	
		
}

ll sum(ll i,ll j,ll n,vector<ll> a,vector<ll> b)
{
	ll s=0,t;
	if(i==j)
	{
		return a[i];
	}
	else
	{
		if(i<j)
		{
		  s=a[i]+a[j];
		  for(t=i+1;t<j;t++)
		  {
		  	s+=b[t];
		  }	
		}
		else
		{
		  s=a[i]+a[j];
		  if(i!=n-1)
		  {
			  for(t=i+1;t<n;t++)
			  {
			  	s+=b[t];
			  }	
          }   
		  if(j!=0)
		  {
		  	for(t=0;t<j;t++)
		  	{
		  		s+=b[t];
		  	}
		  	
		  }
		  	return s;
		}	
	}
	
	
	
}






