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
#define LEFT(v) 2*v
#define RIGHT(v) 2*v+1
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define ROF(i,a,b) for(ll i=b-1;i>=a;i--)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define F first
#define S second
#define F first
#define S second
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define all(a) a.begin(),a.end()


typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
double calc(double);
void bfs(ll graph[10][10],ll,ll,ll);
//bfs
//use adjacency lists in this sace witll work
list<int> adjlist[n];//known * unkown
int main()
{
     	ll a,n,k,sum,m,i,j,l,b,q,x,y;
        getl(n);
        ll graph[10][10];
        memset(graph,0,sizeof(graph));
        for(i=0;i<n-1;i++)
        {
        	getl(a);getl(b);
        	graph[a][b]=1;
        }
        for(i=1;i<=n;i++)
        {
        	for(j=1;j<=n;j++)
        	{
        		cout<<graph[i][j];
        	}
        	cout<<endl;
        }
        getl(q);
        for(i=0;i<q;i++)
        {
        	getl(x);getl(y);
        	bfs(graph,x,y,n);
        }
    
  
 }
 
 void bfs(ll graph[10][10],ll x,ll y,ll n)//can i change the original values of the graph adj matrix
 {
 	
 	queue<ll> q;
 	ll s,t,j;
 	if(x>y)
 	{
 		s=y;t=x;
 	}
 	else{
 		s=x;t=y;
 	}
 	q.push(s);
 	while(!q.empty())
 	{
	 	 j=q.front();q.pop();
	 	if(j==t)
	 	{
	 		printf("%lld taught %lld\n",s,t);
	 		return;
	 	}
	 	for(ll i=1;i<=n;i++)
	 	{
	 		if(graph[j][i]!=0)
	 		{
	 			q.push(i);
	 		}
	 		
	 	}
    }
    printf("No Idea\n");
 	
 	
 }
 //doublepointer -> passing address is the immediate one
 //just clarify any simple doubt  that u get..
 //that is how you improve

//this is what u do right



















