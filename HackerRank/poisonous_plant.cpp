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

void clear( std::stack<ll> &s )
{
   std::stack<ll> empty;//relseaed local var
   std::swap( s, empty );
}

int main()
{//code this fully

  ll a,i,c,n,t,sum,p,count=0,prev_size=0,temp,s_size;
  getl(n);
  stack<ll> s,s1;//operator opverloading comes into play here also
   for(i=0;i<n;i++)
   {
   	getl(a);
   	s.push(a);
	}
	while(true)
	{
	  s_size=s.size();
		while(!s.empty())
		{
			 temp = s.top();s.pop();
			 if(!s.empty())
			 {
				if(temp <= s.top())
				{
					s1.push(temp);
				}
			}
			else
			{
			s1.push(temp);
			}
			
		}
       
		if(s1.size()==prev_size)
		break;
		prev_size=s1.size();
		
		    if(s_size == prev_size)
		    {
		     break;
			}
		
		count++;
		while(!s1.empty())
		{
			 t=s1.top();s1.pop();
			s.push(t);
		}
		
			
    }
    putl(count);
	
}


















