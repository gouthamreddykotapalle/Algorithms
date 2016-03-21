#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
#define repVector(v)  for( typeof(v.begin()) it = v.begin(); it != v.end(); it++ ){cout<<*it<<" ";}


int main()
{
	
	ll n,m,a,c,front=0;
	cin>>n>>m;
	vector<ll> v;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
			ll d;char op;
	while(m--)
	{
		
	cin>>op>>d;
		c = d%n;
		if( op=='R' )
			cout<<v[(front+d-1)%n]<<endl;
		else if( op=='C' ){
			front = (front+c)%n; 
			//cout<<front<<endl;	
		}
		else{
			c=n-c;
			front = (front+c)%n; 
			//cout<<front<<endl;
		}
	}
	
	

}
