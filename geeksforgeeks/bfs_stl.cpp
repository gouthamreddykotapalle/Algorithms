//STL_bfs
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
#define mapi map<char,ll>::iterator
#define pairi pair<ll,ll>::iterator
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
bool check(vector<string>,vector<string>,ll,ll,ll,ll);
ll min(ll,ll);//or macro
//pointer function
int main()
{
	ll i,j,n,k,t,sum,a,b,c,count,r;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
   queue<ll> q;vector<vector<ll> > v;
   getl(n);
   for(i=0;i<n;i++)
   {
   	vector<ll> m;
   	for(j=0;j<n;j++)
   	{
   		m.pb(0);
   	}
   	v.pb(m);
   }
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		cout<<v[i][j];
   	}
   	cout<<endl;
   }
   getl(t);
   while(t--)
   {
   	getl(i);getl(j);
   	v[i-1][j-1]=1;
   }
    for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		cout<<v[i][j];
   	}
   	cout<<endl;
   }
   ll s=1;
   bool* explored = new bool[n+1];
   for (i = 1; i <= n; ++i)
    explored[i] = false;
    
    q.push(s);
    explored[s]=true;
    while(!q.empty())
    {
    	ll s=q.front();
    	 q.pop();
    	 putl(s);
    	 for(i=1;i<=n;i++)
    	 {
    	 	if(v[s-1][i-1]==1 && !explored[i])
    	 	{
    	 		q.push(i);
    	 		explored[i]=true;
    	 	}
    	 }
    }
    delete [] explored;
}
	
