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
	ll n1,n2,i,a,j,diff,d,t;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
		get(n1);
		vector<ll> v1,v2;
		for(i=0;i<n1;i++)
		{
			get(a);
			v1.pb(a);
			
		}
		
		get(n2);
		for(i=0;i<n2;i++)
		{
			get(a);
			v2.pb(a);
			
		}
		
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		
		i=0;j=0;
		diff=1000000;
		
		while(i<n1 && j<n2)
		{
			
			if(v1[i]<v2[j])
			{
				
				d=abs(v1[i]-v2[j]);
				if(d<diff)
				diff=d;
				//cout<<diff<<" "<<v1[i]<<" "<<v2[j]<<endl;
				i++;
				
			}
			else if(v1[i]>v2[j])
			{
			
				d=abs(v1[i]-v2[j]);
				if(d<diff)
				diff=d;
				//cout<<diff<<" "<<v1[i]<<" "<<v2[j]<<endl;
					j++;
				
			}
			else
			{
				diff=0;
				break;
			}
		}
		cout<<diff<<endl;
		
	
		
	}
}

