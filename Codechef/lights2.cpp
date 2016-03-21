#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<vector>
#include<map>
#define ll long long
#define repVector(v)  for( typeof(v.begin()) it = v.begin(); it != v.end(); it++ )


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
	cin>>n;
	ll sum=0;
	
	sum=(n*(n+1)/2)+n;

	
		cout<<sum<<"\n";
		
	}
}
	
