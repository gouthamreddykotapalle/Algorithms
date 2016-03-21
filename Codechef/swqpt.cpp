#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%llu",&a)
#define ll unsigned long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)



int main()
{
	
	ll n,s,w,q,p,t,sum;
	get(n);
	while(n--)
	{
		get(s);get(w);get(q);get(p);get(t);
		sum=s+w+q+p;
		if(sum<=t)
		cout<<"YES\n"<<endl;
		else
		cout<<"NO\n"<<endl;
	};
}

