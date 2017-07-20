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
ll min(ll,ll);//or macro
//pointer function
int main()
{
	//what does the second last and the lsat two mean? is the second last the second in the last two?
	
	ll i,j,n,k,t,p,sum,a,b,count,r,id;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
    mapi it,it2;
    bool flag;
    		getl(a);
    		getl(b);
			while(a!=0 && b!=0)
			{
				map<ll,ll> m;vector<ll> v;vector<bool> f;
				for(i=0;i<a;i++)
				{
					getl(t);
					v.pb(t);
				}
				
				for(i=0;i<b;i++)
				{
					getl(t);
					m[t]++;
				}
				
				p=t=v.size();
				it2=it=m.begin();
				++it2;
			
			
				
				for(i=0;i<t;i++)
				{	flag=false;
					
					if(v[i]<it2->first)
					{
						flag=true;
					}
			
					
					if((it->second >=2 && v[i]==it->first) || (it2->second>=1 && v[i]== it2->first)	)
					{
						flag=false;
					}
					f.pb(flag);
					
				}
				if(s)
				printf("Y\n");
				else
				printf("N\n");
				
				
				getl(a);
	    		getl(b);
			}
    		
		}
    
