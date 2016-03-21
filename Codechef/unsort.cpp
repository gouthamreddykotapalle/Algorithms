#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	BOOST;
	ll t;
	ll n,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		bool flag=true;
		for(ll i=1;i<=n;i++)//this is sorted   2 4 1 3 5
		{
			cin>>a[i];//if 2 --> 2 ==> 1 or 2	
		}
		for(ll i=1;i<=n;i++)
		{
			if(!((a[i]==i-1) || (a[i]==i) || a[i]==(i+1)))
			{
				
				flag=false;
				break;
			}
		}
		if(flag==true)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
		
		
	}
	
	
}
