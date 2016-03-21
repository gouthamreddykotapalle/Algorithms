#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
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
	ll n,i,s,a,t,k,count;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
		get(n);
		count=0;
		for(i=1;i<=n;i++)
		{
		if(__gcd(n,i)==1)
		count++;
		}
		cout<<count<<endl;
	
		
	}
}

