#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	
	ll i,t,n,c,x,y,b,a,sum;
   get(t);
   while(t--)
   {
   	multiset<ll> m;
   	multiset<ll>::iterator it;
   	get(n);
   	for(i=0;i<n;i++)
   	{
   		get(a);
   		m.insert(a);
   	}
   	sum=0;
   	while(m.size()!=1)
   	{
   	
   	it=m.begin();
   	x=*(it);   	
   	y=*(++it);
   	sum+=(y-x);
   	b=x+y;
   	m.erase(it);
   	it=m.begin();
   	m.erase(it);
   	m.insert(b);
   }
   	cout<<sum<<"\n";
   	
   }
   
	
	
	
}

