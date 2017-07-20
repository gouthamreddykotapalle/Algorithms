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
typedef long Long;//love documenting
//feeling very dumb, should increase think cap and mould without bad habits. let's deal with this like sardana
int main()
{
 ll n,t,i,a,count=0,m=0,j;
 BOOST;
 getl(n);
 t=n;
 vector<ll> v;
 while(t--)
 {
   getl(a);
   v.pb(a);
}

	sort(v.begin(),v.end());
	for(i=0;i<n-1;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
		   if( abs(v[i]-v[j])<=1)
		   {
		    count++;
		   }
		   else
		   {
		     m=max(m,count);
		     ///putl(m);
		     count=0;
		     break;
		     
		   }
	}
	}
	
	putl(m+1);
	
	
	}
