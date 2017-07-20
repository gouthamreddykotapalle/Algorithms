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
  
  ll t,i,p,l,n,start,end,prev_num,sum,num,den;
    double res;
    bool flag;
	getl(t);
    while(t--)
    {
      getl(n);
	  res=ceil((double)(sqrt((8*n)+1)-1)/(double)2);
      sum=res+1;
      prev_num=res-1;
      start=((prev_num)*(prev_num+1))/2;
      start++;
      end=n;
      if(sum%2==0)
      {
      	flag=true;
      num=sum-1;
      den=1;
      }
      else
      {
      	flag=false;
      	num=1;
      	den=sum-1;
      }
      for(p=start+1;p<=end;p++)
      {
      	if(flag)
      	{
      		num--;den++;
      	}
      	else
      	{
      		num++;den--;
      	}
      		
      }
      
      printf("TERM %lld IS %lld/%lld\n",n,num,den);
    	
    }
}













