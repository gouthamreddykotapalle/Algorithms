#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<string>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#define FOR(i,a,b) for(ll i=a;i<b;i++)
//#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	ll sum,max,maxi,i,t,n,k,x;
	get(t);
	bool flag;
	//BOOST; 50
	
	while(t--)
	{
	  vector<ll> a,b;
	  get(n);get(k);
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
	  
	  sum=0;
	  max=0;
	  maxi=0;
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]*b[i]>0)
	  	{
	  		if(a[i]<0)
	  		{
			  	if( (a[i]-k)*b[i] >max)
			  	{
			  	max=(a[i]-k)*b[i];
			    maxi=i;	
			    }
         	}
         	
         	else
         	{
         		if( (a[i]+k)*b[i] >max)
			  	{
			  	max=(a[i]+k)*b[i];
			    maxi=i;	
			    }
         		
         	}
         	
	    }
	  }
	  if(a[maxi]>0)
	  a[maxi]+=k;
	  else
	  a[maxi]-=k;
	  
	  for(i=0;i<n;i++)
	  {
	  	sum+=a[i]*b[i];
	  	
	  }
	  
	  cout<<sum<<"\n";
		
		
	}
	
	
	
	
}
