//STL_dfs
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
ll n,m,i,j,v,top;
getl(n);
while(n!=0)
{
getl(m);
ll t;
double pro=100,p;
double adj[n+1][n+1],stk[n+1],visit[n+1],visited[n+1],prob[n+1][n+1],max;

memset(visit,0,sizeof(visit));
memset(visited,0,sizeof(visited));
memset(adj,0,sizeof(adj));
memset(prob,0,sizeof(prob));
top=0;

for(ll k=1;k<=m;k++)
{
cin >>i>>j>>p;
adj[i][j]=adj[j][i]=1;
prob[i][j]=prob[j][i]=p;
}

visited[1]=1;
v=1;
while(v!=n)
{
	max=0;
	for(j=n;j>=1;j--)
	{
		if(adj[v][j]==1 && visited[j]==0)
		{
			if(prob[v][j]>max)
			{
				max=prob[v][j];
				t=j;
			}
		}
	}
	

v=t;
visited[v]=1;
pro*=((max)/double(100));
 
}

printf("%0.6lf percent\n",pro);
getl(n);
}
}
