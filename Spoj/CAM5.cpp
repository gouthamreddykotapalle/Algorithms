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
//#define len length()
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
//its autogtic backtracking
//just needed a bok for the weighted part of the pt07y
void connected_components(ll,vector<ll>[]);
int main()
{//code this fully

  //O(m);worst case m-> size of word
  //permutations doesnt give a substring -> substring  -> exact sequence (contiguous) unlike a permuation
  //disjoint set -> using 1)union find and compression algorithm or 2)the normal method using dfs
  ll t,p,l,n,i,end,a,j,m,b;
	getl(t);//loal array->keep passing the first address again and again and access through formal paramter of the array which points to the same arrayss; global array -> direct access in any function
    while(t--)//recursive dfs
    {
    	getl(n);getl(m);
    	vector<ll> arr[n+1];
    	for(i=0;i<m;i++)
    	{
    		getl(a);getl(b);
    		arr[a].pb(b);
    		arr[b].pb(a);
    	}
    	connected_components(n,arr);//pasing address of the first location
    	
   	}
    	
}

void dfs(ll,bool[],vector<ll>[]);

void connected_components(ll n,vector<ll> arr[])
{
	ll i;
	bool *visited = new bool[n+1];
	memset(visited,0,sizeof(visited));
	ll count=0;
	for(i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			dfs(i,visited,arr);
			count++;
			
		}
	}
	printf("%lld\n",count);
	
}


void dfs(ll v,bool visited[],vector<ll> arr[])//when to use array wihtout size -> only for dynamic arrays using pointers
{
	//now, this is why he uses OOPS concept -> everthting is available within the function
	visited[v]=true;
    //local vars and global vars how they get stored checck it out
	for(ll i=0;i<arr[v].size();i++)//recursion or stack
	{
		ll node=arr[v][i];
		if(!visited[node])
		{
			dfs(node,visited,arr);
		}
		
	}
	
	
	
}














