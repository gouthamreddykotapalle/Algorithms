using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define getl(a) scanf("%lld",&a)
#define putl(a) printf("%lld\n",a)
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
#include<queue>
#define len length()
#define sz size()
#define llu unsigned long long
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define ROF(i,a,b) for(ll i=b-1;i>=a;i--)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
ll max(ll,ll);
bool check(vector<string>,vector<string>,ll,ll,ll,ll);
ll min(ll,ll);//or macro
//pointer function
int main()
{
	ll i,j,n,k,t,sum,a,R,C,r,c;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
   getl(t);
   bool flag;
   while(t--)
   {
    vector<string> b,s;
    getl(R),getl(C);
    for(i=0;i<R;i++)
    {
    	string row;
    	cin>>row;
    	b.pb(row);
    }
    
    getl(r),getl(c);
    for(i=0;i<r;i++)
    {
    	string row;
    	cin>>row;
    	s.pb(row);
    }
    char first= s[0][0]; 
    flag=false;
    for(i=0;i<R-r+1;i++)
    {
    	for(j=0;j<C-c+1;j++)
    	{
    		//cout<<"hi"<<endl;
    		if(first==b[i][j])
    		{
    			if(check(b,s,i,j,r,c)==true)
				{
					//cout<<b[i][j]<<i<<j;
					flag=true;
					break;
				}    			
    		}
    		
    	}
    }
    if(flag==true)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    
    
   }
}

bool check(vector<string> b,vector<string> s,ll i,ll j,ll r,ll c)
{
	bool flag=true;
	for(ll p=0;p<r;p++)
	{
		for(ll q=0;q<c;q++)
		{
			if(s[p][q]==b[i+p][j+q])
			continue;
			else
			{
			  flag= false;
			  break;	
			}
		}
	}	
	return flag;
}

