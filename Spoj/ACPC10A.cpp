#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll  long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll max(vector<ll> ,ll,ll);

int main()
{
	ll n1,n2,n3,t;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	while(true)
	{
		
		get(n1);get(n2);get(n3);
		if(n1==0 && n2==0 && n3==0)
		{
		break;
      	}
		if(n3-n2 == n2-n1)
		cout<<"AP "<<2*n3-n2<<endl;
		else
		{
			cout<<"GP "<<n3*n3/n2<<endl;
		}
		
	}
}

