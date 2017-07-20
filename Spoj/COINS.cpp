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
#define F first
#define S second
#define all(a) a.begin(),a.end()


typedef string String;
typedef long Long;

ll breakdown(ll);
ll min(ll,ll);//or macro
map<ll,ll> h;
//pointer function
int main()
{
	ll i,j,n,k,t,sum,a,b,c,count,max,maxr;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	h.clear();
    while(scanf("%lld",&n)>0)
    {
     
     sum=breakdown(n);
     putl(sum);
	}
	return 0;
}

 ll breakdown(ll n) 
 {
    ll sum;
 	if(n==0)
 	return 0;
 	sum=h[n];
 	if(sum==0)
 	{
 	sum= max(n,breakdown(n/2)+breakdown(n/3)+breakdown(n/4));
 	h[n]=sum;//memory previous(law of DP)
    }
 	return sum;
 }





