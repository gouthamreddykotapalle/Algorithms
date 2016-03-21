#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long

int main()
{
	ll n;
	cin>>n;
	vector<ll> v;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	
	sort(v.begin(),v.end(),greater<ll>());
	vector<ll>::iterator it;
	 for(it = v.begin(); it != v.begin()+2; ++it) {
	        std::cout << (*it) << " ";
	    }
	
	
}

