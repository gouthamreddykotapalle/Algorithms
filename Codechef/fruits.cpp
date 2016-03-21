#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<b;i++)
//#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	ll n,m,k,t;
	cin>>t;
	//BOOST;
	
	while(t--)
	{
		get(n);get(m);get(k);
		while(k>0)
		{
		
		if(n>m)
			m++;
			
		else if(m>n)
			n++;

		else
			break;
		k--;	
	    }
		cout<<abs(m-n)<<"\n";
		
		
		
	}
	
	
	
	
}
