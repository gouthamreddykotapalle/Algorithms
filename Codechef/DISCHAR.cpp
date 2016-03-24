using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld \n",a)
#define ll long long
#define pb push_back
#define ppb pop_back
#include<map>
#include<stack>
#define vi vector<ll>::iterator
#define mi multiset<ll>::iterator
#define mapi map<char,ll>::iterator
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
	ll n,i,s,t,k,j,sum;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	char a[100000+5];
	while(t--)
	{
		map<char ,ll> m;
		sum=0;
		scanf("%s",&a);
		n=0;
		for(i=0;a[i]!='\0';i++)
		{
		  m[a[i]]++;	
		  n++;
		}
	    for(mapi it=m.begin();it!=m.end();++it)
	    sum+=it->second-1;
	    put(n-sum);
	}
}

