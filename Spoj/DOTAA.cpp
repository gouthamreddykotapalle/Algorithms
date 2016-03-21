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
	ll n,i,s,a,t,m,d;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	bool flag;
	while(t--)
	{
		vector<ll> v;
	  get(n);get(m);get(d);
	  for(i=0;i<n;i++)
	  {
	  	get(a);
	  	v.pb(a);
	  	
	  }
	  flag=true;
	  ll count=0;
	  sort(v.begin(),v.end(),std::greater<int>());
	  for(i=0;i<m;i++)
	  {
	  	   
	  	   if(v[i]>d)
	  	   {
	  	   
		  	  	v[i]-=d;
		  	  	count++;
		  	  	//cout<<v[i]<<" "<<i<<" "<<count<<endl;
		  	  	if(count==m)
		  	  	{
		  	  		break;
		  	  	}
		  	  	if(v[i]>d)
		  	  	{
		  	  		i--;
		  	  	}
	  	   }
	  	     else
	  	     {
	  	     	flag=false;
	  	     	break;
	  	     }
	  }
	  if(flag==false)
	  cout<<"NO\n";
	  else
	  cout<<"YES\n";
		
	}
	return 0;
}

