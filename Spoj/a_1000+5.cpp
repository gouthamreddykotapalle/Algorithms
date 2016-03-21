#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll long long
#define pb push_back
#include<string>
#include<map>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll max(vector<ll> ,ll,ll);

int main()
{
	ll n,i,t,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial


		int s[1000+5] = {0}; 
		cout<<*(s+7);//a[7]//a->first location's pointer
		
		int *a;//pointer to an array of consecutive locations
		a= new int[10];
		*(a+2)=10;
		cout<<a[2];
	    map<int,ll> m;
	    m[2]=2;
	    m[3]=3;
	    m[5]=4;
	    
	    m[5]++;//inc succ
	    for(map<int,ll>::iterator it=m.begin();it!=m.end();++it)
	    {
	    	cout<<it->second;
	    }
		
	
}

