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

int main()
{
	BOOST;
	ll t,n,k,i,a,j,count;
	get(t);
	while(t--)
	{
		vector<ll> v;
		get(n);
		for(i=0;i<n;i++)
		{
			get(a);
			v.pb(a);
		}
		get(k);
		count=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((v[i]*v[j])==k)
				{
					count+=1;
				}
			}
		}
		cout<<count
		<<endl;
		
		
	}
		
}
