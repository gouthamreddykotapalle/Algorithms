#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	BOOST;
	ll t;
	ll n,p;
	cin>>t;
	while(t--)
	{
		
		cin>>n;
	/*	if(n%2!=0)
		{
			n=n-1;
		}*/
		
		p=floor(  (((n/2)*(n/2))/2) - (n/4) );
		cout<<p<<endl;
		
      	
		
		
	}
	
	
	
}
