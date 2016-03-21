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

ll max(vector<ll> ,ll,ll);

int main()
{
	ll n,i,s,g,b,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(g);get(b);
	while(g!=-1 && b!=-1)
	{
		if(g==0 && b!=0)
		cout<<b<<endl;
		else if(b==0 && g!=0)
		cout<<g<<endl;
		else if(g==1 || b==1)
		{
			if(b==1)
			cout<<ceil((float)g/2.0)<<endl;
			else
			cout<<ceil((float)b/2.0)<<endl;
		}
		else if(b==0 && g==0)
		cout<<0<<endl;
		else
		{
			if(g>b)
			{
			
		
		    }
		}    
			else
			{
				
			
			}
		
		}
	
		get(g);get(b);
		
	}
}

