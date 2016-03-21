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
	
	ll i,j,n,c,x,k,b,a,count;
   get(n);get(k);
   vector<ll> v;
   
   for(i=0;i<n;i++)
   {
   	cin>>x;
   	v.pb(x);
   }
   count=0;
   for(i=0;i<n;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   		
   		if(v[i]+v[j] <k)
   		{
   		//cout<<i<<" "<<j<<endl;
		      		count++;
   	}
   	}
   }
   cout<<count<<endl;
	
	
	
}

