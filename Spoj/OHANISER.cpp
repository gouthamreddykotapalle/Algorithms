using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define getl(a) scanf("%lld",&a)
#define putl(a) printf("%lld\n",a)
#define putd(a) printf("%d\n",a)
#define getu(a) scanf("%llu",&a)
#define getui(a) scanf("%u",&a)
#define putui(a) printf("%u\n",a)
#define putu(a) printf("%llu\n",a)
#define ll long long
#define pb push_back
#define ull unsigned long long
#define ui unsigned int
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
#define MOD 1000000007

typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
double calc(double);
ll bfs(char**,ll,ll);
//complete dfs with adjacency lists
//its autogtic backtracking
//just needed a bok for the weighted part of the pt07y
void connected_components(ll,vector<ll>[]);
ull f(ll);//prototype
ui arr[100000+5];

void seive()
{
	arr[1]=1;//can use << in the place of  *2 or X2
	ui p1 = 1;
for(ui i=2;i<=100000;i++)
{
	arr[i]=((arr[i-1]<<1/* *2 */)+p1)%MOD;
	p1=(p1<<1)%MOD;//learn to use this
	//cout<<arr[i]<<endl;
}
  	
	
}


int main()
{//code this fully

  ui a,b,c,t,n;
  seive();
  getui(t);
  c=t;
  while(t--)
  {
  	getui(n);
  	printf("Case %u: %u\n",c-t,arr[n]);
  	
  	
  }
  //ui->3.7 ll 4.1 MB
}
