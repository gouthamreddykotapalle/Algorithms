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

int main()
{
	ll n,i,s,a,t,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
		get(n);
		map<ll,ll> m;
		for(int i=0;i<n;i++)
		{
			get(a);
			m[a]++;
		}
		bool flag=false;
		for(map<ll,ll>::iterator it=m.begin();it!=m.end();it++)
		{
			if(it->second>(n/2))
			{
			flag=true;
			cout<<"YES "<<it->first<<endl;
			break;
		    } 
		}
		if(flag==false)
		cout<<"NO "<<endl;
	   
		
	}
}

