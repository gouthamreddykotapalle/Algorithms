#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include<vector>
#define ite vector<ll>::iterator
#define repVector(v) for(ite i=v.begin();i!=v.end();++i)

int main()
{
	ll t,n,l;
	cin>>t;
	vector<ll> v;
	while(t--)
	{
		cin>>n;
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>l;
			v.push_back(l);
		}
		v.push_back(v[0]);
		v.push_back(v[1]);
		v.push_back(v[2]);
		
		for(ll i=0;i<n;i++)
		{
			sum += v[i]*v[i+1]*v[i+2]*v[i+3];
			
		}
		
		for(int i=0;i<n;i++)
		{
		
		for(int j=0;j<n;j++)
		{
		
		   s=swap(v[j]);
		   sum = sum+
	}
			
	}
		}
		
		
		
		
		
	}
	
	
	
}


int swap(int i)
{
	
	if(i == 1)
	return -1;
	else
	return 1;
	
	
}

