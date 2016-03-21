#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include<map>
#define ite map<ll,ll>::iterator
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	BOOST;
	ll t,x,y,k,n,pi,ci;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>k>>n;
		ll a[n],b[n];
		bool flag= true;
		for(ll i=0;i<n;i++)
		{
			cin>>pi>>ci;
			a[i]=pi;
			b[i]=ci;
		}
		
		for(ll i=0;i<n;i++)
		{
			if((x-y)<=a[i] && b[i]<=k)
			{
				cout<<"LuckyChef\n";
				flag=false;
				break;
			}
		//	cout<<a[i]<<b[i]<<endl;
		
		}
		if(flag==true)
		{
			cout<<"UnluckyChef\n";
		}
		
		
	}
	
	
}
