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
#define mapi map<string,ll>::iterator
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
//its automatic backtracking
//just needed a bok for the weighted part of the pt07y
int main()
{

  //O(m);worst case m-> size of word
  BOOST;
  ll t,i,j,encoded_number,d,l,len;
  cin>>t;
  while(t--)
  {
  	string s,num;
  	cin>>num;cin>>s;//encoded
  	l=s.length();
  	len=num.length();
  	i=0;
  	j=0;
  	while(true)
  	{//find the complexity inside -> 0(l)
  		d=num[j]-48;
  		if(s[i]-d<97)
  		{
  		  	encoded_number=97-s[i]-d;//97-1=96->122
  		  	s[i]=s[i]+122-97-d+1;
  		}
  	    else
  	    {
	  	    encoded_number=d;
	  		s[i]=s[i]-encoded_number;
  	    }
		i++;j++; 
  		if(i>(l-1) && len>=l)
  		break;
  		if(j>(len-1) && len<l)
  		{
  			if(i>(l-1))
  			break;
  			reverse(num.begin(),num.end());
  			j=0;
  		}
  		
  	}
  	cout<<s<<endl;
  }

  
}













