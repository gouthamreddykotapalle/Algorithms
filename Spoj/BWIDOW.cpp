using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define getl(a) scanf("%lld",&a)
#define putl(a) printf("%lld\n",a)
#define putd(a) printf("%d\n",a)
#define getu(a) scanf("%llu",&a)
#define putu(a) printf("%llu\n",a)
#define ll long long
#define pb push_back
#define ppb pop_back
#include<map>
#include<stack>
#define vi vector<ll>::iterator
#define mi multiset<ll>::iterator
#define mapi map<char,ll>::iterator
#define pairi pair<ll,ll>::iterator
#include<queue>
#define mp make_pair
#define len length()
#define sz size()
#define llu unsigned long long
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define ROF(i,a,b) for(ll i=b-1;i>=a;i--)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define F first
#define S second

typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
ll max(ll,ll);
bool check(vector<string>,vector<string>,ll,ll,ll,ll);
ll min(ll,ll);//or macro
ll calc(ll);
//pointer function
int main()
{
	ll i,j,n,k,t,sum,a,R,count,m,p,b;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
   getl(t);
   while(t--)
   {
   	vector<pair<ll,ll> > v;
   	getl(n);
   	m=0;
   	for(i=0;i<n;i++)
   	{
   		getl(a);getl(b);
   		v.pb(mp(a,b));
   		if(a>m)
   		{
   			m=a;
   			p=i;
   		}	
   	}
   	bool flag=true;
   	for(i=0;i<n;i++)
   	{
   		if(i!=p)
   		if(v[i].S >= m)
   		{
   		flag = false;
   	    break;
   }
   }
	   if(flag==true)
	   printf("%ld\n",p+1);
	   else
	   printf("-1\n");
   	
   }
   return 0;
}








