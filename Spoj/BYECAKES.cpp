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
#define mapi map<char,ll>::iterator
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
  BOOST;
  ll t,i,d,l,len,e,f,s,x,e1,f1,s1,x1;
  getl(e);getl(f);getl(s);getl(x);getl(e1);getl(f1);getl(s1);getl(x1);
  while(e!=-1&&f!=-1&&s!=-1&&x!=-1&&e1!=-1&&f1!=-1&&s1!=-1&&x1!=-1)
  {
  	  map<char,ll> m;
      m['e']=m['f']=m['s']=m['x']=0;
  	  while(true)
  	  {
  	  	if(e==0&&f==0&&s==0&&x==0)
  	  	break;
  	  	if(e<e1)
  	  	{
  	  		m['e']+=e1-e;
  	  		e=0;
  	  	}
  	  	else
  	  	e-=e1;
  	  	if(f<f1)
  	  	{
  	  		m['f']+=f1-f;
  	  		f=0;
  	  	}
  	    else
  	  	f-=f1;
  	  	if(s<s1)
  	  	{
  	  		m['s']+=s1-s;
  	  		s=0;
  	  	}
  	  	else
  	  	s-=s1;
  	  	if(x<x1)
  	  	{
  	  		m['x']+=x1-x;
  	  		x=0;
  	  	}
  	  	else
  	  	x-=x1;
  	  	if(e==0&&f==0&&s==0&&x==0)
  	  	break;
  	  }
  	  for(mapi it=m.begin();it!=m.end();++it)
  	  {
  	  	printf("%lld ",it->second);
  	  	
  	  }
  	  printf("\n");
  	  getl(e);getl(f);getl(s);getl(x);getl(e1);getl(f1);getl(s1);getl(x1);
  }
}













