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
	ll n,i,s,a,t,k,j,pdt;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
		get(n);
		multiset<ll> A,B;
		for(int i=0;i<n;i++)
		{
			get(a);A.insert(a);
		}
	
		for(int i=0;i<n;i++)
		{
			get(a);B.insert(a);
		}
		pdt=0;
		multiset<ll>::iterator it1=B.begin();
		for(multiset<ll>::iterator it=A.begin();it!=A.end();++it)
		{
			//cout<<*it<<" "<<*it1<<endl;
			pdt+= (*it)*(*it1);
			//cout<<pdt<<endl;
			++it1;
			
		}
		cout<<pdt<<endl;
		
		
		
	}
}

