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
#define mapi map<ll,ll>::iterator
#define seti set<ll>::iterator
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

ll quicksort(vector<ll> ,ll);
//pointer function
//Binary tree?
int main()
{
	  ll i,j,n,k,a,p,sum,b,count,mn,dist;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	  getl(n);
	  map<ll,ll> m;
	  k=0;
	 for(i=0;i<n;i++) //o(n)
	 {
	 	getl(a);
	 	k^=a;
	 }
	 putl(k);//half thr time
	 
	 /*for(mapi it= m.begin();it!=m.end();it++) o(n)
	 {
       if(it->second==1)
       {
       putl(it->first);
       break;
       }
	 }*/
	 
}
