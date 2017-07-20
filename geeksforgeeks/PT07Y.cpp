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
ll min(ll,ll);//or macro//perfect soln
ll adj[10000+5][10000+5],visit[10000+5],visited[10000+5];//learnt why finally!!
//pointer function
int main()
{
ll n,m,i,j,v;
getl(n);
ll t,k;
stack<ll> stk;
memset(visit,0,sizeof(visit));
memset(visited,0,sizeof(visited));
memset(adj,0,sizeof(adj));
getl(m);
for(ll k=1;k<=m;k++)
{
cin >>i>>j;
adj[i][j]=adj[j][i]=1;
}
bool flag=true;
if(m!=(n-1))
{
	flag= false;
}
else
{

	visited[1]=1;
	k=v=1;
	while(k<=n)
	{
		for(j=n;j>=1;j--)
		{
			if(adj[v][j]==1 && visited[j]==0 && visit[j]==0)
			{
				visit[j]=1;
				stk.push(j);
			}
		}
		//cout<<k<<endl;
		if(!stk.empty())
		{
		v=stk.top();
		stk.pop();
		k++;//printf 4 here and dont run anything else and exit
		visit[v]=0;
		visited[v]=1;
	    }
	    else
	    {
	    	if(k==n)
	    	flag=true;
	    	else
	    	flag=false;
	    	break;
	    }
	 
	}
}
if(flag == true)
	printf("YES\n");
else
    printf("NO\n");

}
