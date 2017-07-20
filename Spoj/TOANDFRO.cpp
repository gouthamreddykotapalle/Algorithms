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
//bfs
int main()
{
     	ll a,n,k,sum,m,i,j,l;
     	string t;
        getl(n);
        bool flag;
        while(n!=0)
        {
        	string s;//address allocated
        	cin>>s;
        	l=s.length();
        	vector<string> v;
        	i=0;
        	flag = true;
        	while(true)
        	{
        		if(flag==true)
        		{
                 flag = false;
                 t=s.substr(i,n);
                 //ends with an x remove last character
                 //cout<<t<<endl;
        	     v.pb(t);
                }
        		else
        		{
        			flag= true;
        		    t=s.substr(i,n);
        			reverse(t.begin(),t.end());
        			//ends with an x remove the last character
        			 //cout<<t<<endl;
        			v.pb(t);	
        		}
        		i+=n;
        	    if(i==l)
        	    break;	
        	}
        	int a=v.size();
        	for(i=0;i<n;i++)for(j=0;j<a;j++){
        		if(v[j][i]!='x')
        		printf("%c",v[j][i]);
        		
        	}
        	cout<<endl;
        	getl(n);
        }
            
}

ll bfs(char **arr,ll i,ll j)//double pointer or an array or pointers
{
	
	
	
	
	
	
}






















