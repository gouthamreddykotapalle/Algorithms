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
#define mi multiset<char>::iterator
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
#define all(a) a.begin(),a.end()


typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
double calc(double);
ll bfs(vector<string>,ll,ll,ll,ll);
//complete dfs with adjacency lists
//its automatic backtracking
//just needed a bok for the weighted part of the pt07y

struct point
{
	int x;
	int y;
	
};

bool mark[100][100];int dist[100][100];
int main()
{
	      //sync true
     	ll a,n,m,k,sum,i,b,j,l,t,p;
        getl(t);
        while(t--)
        {
        	getl(n);getl(m);
        	vector<string> mat;
        	memset(mark,0,sizeof(mark));
        	memset(dist,0,sizeof(dist));
        	string s;
        	for(i=0;i<n;i++)
        	{
	        	cin>>s;//scanf rectify
	        	mat.pb(s);
            }
           
            for(i=0;i<n;i++)for(j=0;j<m;j++)
            if(mat[i][j]=='C')
            bfs(mat,i,j,n,m);
        	
        }
    
	 }

ll bfs(vector<string> mat,ll i,ll j,ll n,ll m)
{
	//iterative
	struct point p;
	queue<point> q;
	mark[i][j]=1;
	dist[i][j]=0;
	p.x=i;p.y=j;
	q.push(p);
	while(!q.empty())
	{
		p=q.front();q.pop();
		int x=p.x;
		int y=p.y;
		if(mat[x][y]=='C' ||mat[x][y]=='.' )
		if(x+1<n && y<m && x+1 >=0 && y+1>=0){ if(mat[x+1][y]!='#' && !mark[x+1][y]){p.x=x+1;p.y=y;q.push(p);mark[x+1][y]=1;dist[x+1][y]=dist[x][y]+1;}}//collection of values(structures) in the queue
		if(x-1<n && y<m){ if(mat[x-1][y]!='#'){p.x=x-1;p.y=y;q.push(p);mark[x-1][y]=1;dist[x-1][y]=dist[x][y]+1;}}
		if(x<n && y+1<m){ if(mat[x][y+1]!='#'){p.x=x;p.y=y+1;q.push(p);mark[x][y+1]=1;dist[x][y+1]=dist[x][y]+1;}}
		if(x<n && y-1<m){ if(mat[x][y-1]!='#'){p.x=x;p.y=y-1;q.push(p);mark[x][y-1]=1;dist[x][y-1]=dist[x][y]+1;}}	
		
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
		cout<<dist[i][j];
    }
    cout<<endl;
    }
	
	
}











