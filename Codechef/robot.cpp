#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long
#define pb push_back 
#define get(a) scanf("%lld",&a)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	ll n,m,a,t,i,count;
	get(t);
	BOOST;
	
	while(t--)
	{
		vector<ll> v;
		vector<char> check;
		count=0;
		get(n);get(m);  //4 5 6 7 1 2 3
		                //y y y y y y y
		for(a=m+1;a<=n;a++)
		{
			v.pb(a);
		}
		for(a=1;a<=m;a++)
		{
			v.pb(a);
		}
		for( i=0;i<v.size();i++)
		{
			check.push_back('n');
			
		}
		i=0;
		while(true)
		{
		
			if(check[i]=='n')
			{
				check[i]='y';
				i=v[i]-1;

			}
			else
			{
				break;
				
			}
		}
			
		for( i=0;i<check.size();i++)
		{
			if(check[i]=='y')
			count+=1;
		}
		if(count==check.size())
		 cout<<"Yes"<<"\n";
		 else
		 cout<<"No "<<count<<"\n";
		
		
		
		}
		
		
	   	
	}
	
	
	
