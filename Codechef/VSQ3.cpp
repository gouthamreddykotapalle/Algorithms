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
#define all(a) a.begin(),a.end()


typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
double calc(double);
ll bfs(char**,ll,ll);



ll maxSubArraySum(vector<ll> a)
{
   ll max_so_far = a[0];
   ll curr_max = a[0];
   ll size=a.size();
 
   for (ll i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
 

//bfs
int main()
{
     	ll a,n,k,sum,b,c,d,m,i,j,l,t;
        getl(t);
        while(t--)
        {
        	getl(n);getl(a);getl(b);getl(c);getl(d);
        	m=LLONG_MIN;
        	bool flag=false;
        	vector<ll> v;
        	for(i=0;i<n;i++)
        	{
        		getl(j);
        		if(j!=a && j!=b && j!=c && j!=d)
        		{
        			v.pb(j);
        			flag=true;
        			
        		}
        		else
				{
					if(flag==true)
					{
						flag=false;
					    m=max(maxSubArraySum(v),m);
					    v.erase(v.begin(),v.end());
				    }
					
        		}
        		
        	}
            m=max(maxSubArraySum(v),m);
        	putl(m);
        	
        }

 }
 //doublepointer -> passing address is the immediate one
 //just clarify any simple doubt  that u get..
 //that is how you improve

//this is what u do right



















