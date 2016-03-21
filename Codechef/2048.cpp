#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<b;i++)

int main()
{
	ll n,a, t;
	cin>>t;
cout<<"hello bro";
	
	while(t--)
	{
		vector<ll> v;
		cin>>n;
		FOR(i,0,n)
		{
			v.push_back(2);
		}
		ll count=0;
		for(ll i=0;i<n;i++)//  16            
		{
			if(i!=(n-1))
			{
			
			if(v[i]==v[i+1] )
			{
				v[i]=2*v[i];
				v.erase(v.begin()+i+1);
				n--;//3 i=2
				if(i==(n-1) && n>1)
				{
					i=-1;
				}
				count++;
			}
			
		   }
			else
			{
				//	cout<<"hi";
				if( v[i]!=v[i-1])
				{
					
						v[i]=2*v[i];
				        i=-1;
					
			    }
			    else
			    {
			    	i=-1;
			    
			    }
			    
				
			}
			
			
		}
		
		cout<<count<<endl;
		
		
	}
	
	
	
}
