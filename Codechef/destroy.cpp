#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<b;i++)
//#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	ll n,m,i,t,count;
	get(t);
	vector<ll> v;
	//BOOST;
	
	while(t--)
	{
		get(n);
		count=0;
	    for(ll a =0;a<n;a++)//1 2 3 3 3 4 5 6
	    {
	    	cin>>i;
	    	v.push_back(i);
	    }
	    cout<<v[(n/2)-1];
	    sort(v.begin(), v.end());
	    
	    while(!v.empty() && v.size()!=1)
	    	{
	    	
	    	if(v[0]!=v[v.size()-1])
	    	{
	    	
	    	v.erase (v.begin());
	    	v.pop_back();
	    	count++;
	        }
	        else
	        {
	        v.pop_back();
	    	v.pop_back();
	        count +=2;
	        }
	    	
	    }
	    if(v.size()==1)
	    count++;
	    cout<<count<<"\n";
		
		
	}
	
	
	
	
}
