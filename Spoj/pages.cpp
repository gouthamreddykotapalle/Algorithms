using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll long long
#define pb push_back
#define ppb pop_back
#include<map>
#include<stack>
#define vi vector<ll>::iterator
#define mi multiset<ll>::iterator
#define mapi map<ll,ll>::iterator
#include<queue>
#define len length()
#define sz size()
#define llu unsigned long long
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define ROF(i,a,b) for(ll i=b-1;i>=a;i--)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
ll max(ll,ll);
ll min(ll,ll);//or macro
//pointer function
int main()
{
	ll n,i,s,a,t,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
		get(n);get(f);
		sum=(n*(n+1))/2;
		vector<ll> v,y;
		for(i=0;i<f;i++)
		{
			get(a);
			v.pb(a);
		    sum-=a;
		}
		get(p);
		avg=0;
		  for(i=1;i<=n;i++)
		  {
		  	for(j=i+1;j<=n;j++)
		  	{
		  		temp=sum-v[i]*v[j];
		  		
		  	}
		  	
		  	
		  }
	
		
	}
}

