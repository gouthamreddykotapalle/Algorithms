#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long
#define get(a) scanf("%lld",&a)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	ll n1,n2,m,a,t;
	get(t);
	BOOST;
	
	while(t--)
	{
		vector<ll> v;
		get(n1);get(n2);get(m);
		for(a=m;a>=1;a--)
		{
			if(n1>=a&&n2>=a)
			 {
			 	n1-=a;n2-=a;
			 }
			
			
		}
		//cout<<"hi";
		cout<<n1+n2<<"\n";
		
	
	    
	     
		
	}
	
	
	
}
