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
#define ull unsigned long long
#define ppb pop_back
#include<map>
#include<stack>
#define vi vector<ll>::iterator
#define mi multiset<ll>::iterator
#define mapi map<ll,ll>::iterator
#define seti set<ll>::iterator
#define pairi pair<ll,ll>::iterator
#include<queue>
#define mp(a,b) make_pair(a,b)
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
ull f(ll);


void seive()
{
    memset(prime, true, sizeof(prime));//={0}

    for (ll p=2; p*p<=10000000; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (ll i=p*2; i<=10000000; i += p)
                prime[i] = false;
        }
    }

}

bool is_cons_prime(ll a, ll f)
{
 ll count=0;
  for(ll i=a+1;i<f;i++)
  { 
    if(prime[i])
    {
      count++;
      //cout<<i<<" ";
	}
	if(count > 4)
	{
	 return false;
	}
  }
  
  if(count ==4)
  return true;

}

int main()
{//code this fully
ll t,n,i,sum,p,a,b,c,d,e,f;
seive();
getl(t);
while(t--)
{
  getl(n);
  sum=0;
  getl(a);getl(b);getl(c);getl(d);getl(e);getl(f);
	  for(i=2;i<n;i++)
	  {
	      p=i*i;
	      if(prime[p+a] && prime[p+b] && prime[p+c] && prime[p+d] && prime[p+e]&&prime[p+f])
		  if(is_cons_prime(p+a,p+f))
		  {
		     sum+=i;
		  }
      }
      putl(sum);

}

  
  
	
}


















