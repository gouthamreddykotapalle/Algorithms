using namespace std;
#include<bits/stdc++.h>
#include<algorithm>
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
ll min(ll,ll);//or macro
//pointer function
map<ll,ll> m;
int main()
{
 ll q,a,b,m,n,s,t,i,app,ora,f1=0,f2=0;
 BOOST;
 getl(s);getl(t);
 getl(a);getl(b);
  getl(m);getl(n);
  
  for(i=0;i<m;i++)
  {
    getl(app);
    if(a+app >=s && a+app <=t)
    {
      f1++;
	}
  }
	
	for(i=0;i<n;i++)
  {
    getl(ora);
    if(b+ora >=s && b+ora <=t)
    {
      f2++;
	}
  }
  putl(f1);
  putl(f2);

}
	
