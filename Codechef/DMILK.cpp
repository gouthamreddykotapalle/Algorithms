using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define getl(a) scanf("%lld",&a)
#define putl(a) printf("%lld\n",a)
#define getu(a) scanf("%llu",&a)
#define putu(a) printf("%llu\n",a)
#define ll long long
#define llu unsigned long long
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
	ll n,i,m,a,t,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	ll sum;
	getl(t);
	while(t--)
	{
		getl(n);getl(m);getl(k);
		vector<ll> v;
		for(i=0;i<n;i++)
		{
			getl(a);
			v.pb(a);
		}
        sum=0;
	    for(i=0;i<n;i++)
	    {
	    	j=0;
	    	while(v[i]>=k && j<m)
	    	{
	    		v[i]-=k;
	    		j++;
	    	}
	    	sum+=v[i];
	    }
	    putl(sum%1000000007);
		
	}
}

