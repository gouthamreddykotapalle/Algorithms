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
ll bfs(char**,ll,ll);
//complete dfs with adjacency lists
//its automatic backtracking
int main()
{
	    BOOST;   
     	ll a,n,sum,i,b,j,l,t,m;
     	stack<ll> s;
        cin>>n>>m;
        list<ll> g[n+1];
        for(i=0;i<m;i++)
        {
          cin>>a>>b;
		  g[a].pb(b);
		 //g[b].pb(a);//perform single sided -> take a case
        }
        s.push(1);
        int visit[n+1];
        memset(visit,0,sizeof(visit));
        int visited[n+1];
        memset(visited,0,sizeof(visited));
        visited[1]=1;
        j=s.top();s.pop();
        int k=1;//first vertex
        bool flag= true;
        do
        {
             	
        	for(list<ll>::iterator it=g[j].begin();it!=g[j].end();it++)
        	{
        		if(visit[*it]==0)
        		{
	        		if(visited[*it]==0)
	        		{
		        		s.push(*it);
		        		visit[*it]=1;
	        	    }
	        	    else
	        	    {
		        	    	flag=false;
		        	    	break;
	        	    }
        	   }
        	}
        	if(flag==false)
        	break;
        	if(s.empty() && k!=n)
        	{
        		flag=false;
     	    	break;
        	}
        	j=s.top();s.pop();
        	k++;
        	//cout<<j<<endl;
        	visit[j]=0;
        	visited[j]=1;
        	
        	
        }while(k!=n);//empty is false
        
	        if(flag)
	        {
		        
		        cout<<"YES\n";
		        
		    }
	        else
	        {
	        	cout<<"NO\n";
	        }
        
 }
 //doublepointer -> passing address is the immediate one
 //just clarify any simple doubt  that u get..
 //that is how you improve

//this is what u do right



















