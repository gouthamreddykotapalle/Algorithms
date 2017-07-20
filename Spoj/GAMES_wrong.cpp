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
int main()
{

  //O(m);worst case m-> size of word
  //permutations doesnt give a substring -> substring  -> exact sequence (contiguous) unlike a permuation
  ll t,p,l,start,i,end,a,j,num,den;
    float n,f;
	getl(t);
    while(t--)
    {
    	scanf("%f",&n);
    	n=n-floor(n);
       	for(i=1;i<=10000;i++)
    	{
    		f=n*i;
    		printf("%lld %f %f %f %f\n",i,f,ceil(f),floor(f),f/ceil(f));
    		if((f/ceil(f))==1)
    		{
    			putl(i);
    			break;
    			
    		}
    	}
    	
    }
}













