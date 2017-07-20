using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld\n",a)
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
	ll n,i,s,a,t,e,sum,count;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
	  get(n);
	  vector<ll> v;
	  sum=0;
	  for(i=0;i<n;i++)
	  {
	  	get(a);
	  	v.pb(a);
	  	sum+=a;
	  }
	  if(sum%n!=0)
	  {
	  	printf("No Treat\n");
	  	continue;
	  }
	  e=sum/n;
	  count=0;
	  for(i=0;i<n;i++)
	  {
	    if(v[i]>e)
		{
			count+=v[i]-e;
		}	
	  }
	  put(count);
		
	}
}

