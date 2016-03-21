#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{

ll n,t;
cin>>n;

  while(n--)
  {
  	
  	cin>>t;
  	ll a[t];
  	ll sum =0,y=0;
  	ll x;
  	for(ll i =0;i<t;i++)
  	{
  		cin>>a[i];
  		sum+=a[i];
  		if( a[i] == 0 )
				y++;
  	}
  	
  	if( sum < 100 )
			cout<<"NO\n";
		else if ( sum == 100 )
			cout<<"YES\n";
		else if( sum > 100 + t )  
				cout<<"NO\n";
		else{
			x = sum - 100;
			if ( x < t - y )
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
  
    
  	
  	
  }

}
