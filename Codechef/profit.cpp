#include<bits/stdc++.h>
#define ll long long
using  namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x,p;
		cin>>n>>x;
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>p;
			if(p>x)
			{
				sum +=(p-x);
			}
		}
		
		cout<<sum<<"\n";
		
		
		
		
	}
	
}
