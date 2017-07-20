using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define getl(a) scanf("%lld",&a)
#define putl(a) printf("%lld\n",a)
#define getu(a) scanf("%llu",&a)
#define putu(a) printf("%llu\n",a)
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
	ll n,i,j,k,max,a,xr,first,last;
	getl(n);
	vector<ll> v;
	for(i=0;i<n;i++)
	{
		getl(a);
		v.pb(a);
		
	}
	max=0;
	for(i=0;i<n;i++)
	{ 
		for(j=i;j<n;j++)
		{
			 xr=0;
			 for(k=i;k<=j;k++)//2 for only the value
			 { 
			    if(i!=j)
			 	xr=xr^v[k];
			 	else
			 	xr=0^v[k];//i=j
			 }
			 //cout<<v[i]<<" "<<v[j]<<" "<<xr<<endl;	
			 if(xr>max)
			 {
			 	 max=xr;
			 	 first=i;
			 	 last=j;
		     }
			
		}
	}
	for(i=first;i<=last;i++)
	{
		printf("%d ",v[i]);
	}
	printf("\nXOR=%d\n",max);
	
}

