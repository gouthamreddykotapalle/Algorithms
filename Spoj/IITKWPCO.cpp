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
  ll t,i,p,l,n,start,end,a,j,num,den;
    double res;
    bool flag;
	getl(t);
    while(t--)
    {
    	getl(n);
    	ll a[n];bool mark[n];ll count=0;
    	memset(mark,0,sizeof(mark));
    	for(i=0;i<n;i++)
    	{
    	   getl(a[i]);
		   //O(n*n) passed    		
    	}
    	
    	sort(a,a+n);//sorting 100 is fine,sorring 10^6 ->should think about complexity
    	
    	for(i=0;i<n;i++)
    	{
    		for(j=i+1;j<n;j++)
    		{
    			/*if(a[i]>a[j])
    			{
    				if(a[i]%a[j]==0 && a[i]/a[j]==2 &&!mark[i]&&!mark[j])
    				{
    					count++;
    				mark[i]=mark[j]=1;//right to left eq solved
    			    }
    			}
    			else
    			{*/
    				if(a[j]%a[i]==0 && a[j]/a[i]==2 &&!mark[i]&&!mark[j])
    					{
    					count++;
    				mark[i]=mark[j]=1;
    			 	//	}
    			}
    		}
    	}
    	putl(count);
    	
    }
}













