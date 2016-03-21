#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll max(vector<ll> ,ll,ll);

int main()
{
	ll n,i,s,a,t,x,y;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
		get(x);get(y);
		if(x==y)
		{
		  if(x%2==0 && y%2==0)
		  {
		  	cout<<x+y<<endl;
		  }	
		  else if(x%2!=0 && y%2!=0)
		  {
		  	cout<<x+y-1<<endl;
		  }
			
			
		}else if(x>y && x-y==2)
		{
			if(x%2==0 && y%2==0)
		  {
		  	cout<<x+y<<endl;
		  }	
		  else if(x%2!=0 && y%2!=0)
		  {
		  	cout<<x+y-1<<endl;
		  }
			
			
		}else
		{
			
			cout<<"No Number\n";
		}
	
		
	}
}

