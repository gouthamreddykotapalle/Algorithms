#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<b;i++)

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	ll n,sum, t;
	cin>>t;
	
	while(t--)
	{
		scanf("%lld",&n);
		sum=0;
		for(ll i=1;i<=n;i++)
		{
			sum+= (n/(gcd(i,n)));
		}
		
		
		cout<<sum<<"\n";
		
	}
	
}


