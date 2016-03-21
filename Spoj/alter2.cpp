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
	BOOST;
	ll n,i,s,a,t,count,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
		get(n);
		vector<ll> v;
		for( i=0;i<n;i++)
		{
			get(a);
			v.pb(a);
		}		
		for(i=0;i<n-1;i++)//time
		{
			count=1;
			for(j=i;j<n-1;j++)
			{
				if((v[j] * v[j+1]) < 0)
				count++;
				else
				break;
				
			}
			printf("%lld ",count);
	     }
	     printf("1\n");
}
}

