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
ll arr[186+5][186+5];
int main()
{
	ll i,j,n,k,t,p,sum,b,count,m,mn,dist;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	string a;
    getl(t);
    while(t--)
    {
    	memset(arr,0,sizeof(arr));
    	vector<pair<ll,ll> > v,z;
    	getl(n);getl(m);
    	for(i=0;i<n;i++)
		{
			cin>>a;
    		for(j=0;j<m;j++)
    		{
    		if(a[j]=='1')
    		v.pb(mp(i,j));
    		else
    		z.pb(mp(i,j));
    	    }
    	}    	
    	
    	for(i=0;i<z.size();i++)
    	{
    		mn=LLONG_MAX;
    		for(j=0;j<v.size();j++)
    		{
    			dist=abs(v[j].F-z[i].F)+abs(v[j].S-z[i].S);
    			mn=min(mn,dist);
    		}
    		arr[z[i].F][z[i].S]=mn;
    	}
    	
    		for(i=0;i<n;i++)
			{
			for(j=0;j<m;j++)
    		{
    		  printf("%lld ",arr[i][j]);	
    		}
    		printf("\n");
    	    }
    	
    	
    }
    //actual solution  -> bfs on matrix == graph(s)     
		}
    
