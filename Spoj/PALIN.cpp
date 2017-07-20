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
//complete dfs with adjacency lists
//its automatic backtracking
//just needed a bok for the weighted part of the pt07y
int main()
{
	   BOOST;   
     	ll a,n,k,sum,i,b,j,l,t,p;
        cin>>t;
        while(t--)
        {
        	string s,temp;
        	cin>>s;
        	l=s.length();
        	if(l%2==0)
        	{
        		i=l/2-1;
        		j=l/2;
        		p=s[i]-48;
        		
        	}
        	else
        	{
        		i=l/2-1;
        		j=l/2+1;
        		p=s[i]-48;
        		
        		
        	}
        	for(ll p1=p;p1<9;p1++)
        		{
        			temp=s;//original
        			s[i]=p1+48;s[j]=p1+48;//new
        			if(temp<s)
        			{
        				cout<<temp<<endl;
        				break;
        			}
        			else
        			{
        				s=temp;
        				
        			}
        			
        		}
              	
        	
        }
	 }













