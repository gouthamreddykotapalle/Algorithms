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
#include<ctype.h>

typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
ll max(ll,ll);
ll min(ll,ll);//or macro
//pointer function
int main()
{
	ll i,s,n,r,t,k,count,prev;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
   getl(t);
   char c;
   vector<char> v,temp;
   vector< vector<char> > all;
   vector<ll> trace,num;
   while(t--)
   {
   	getl(n);
   	switch(n)
   	{
   		case 1:
   			count=0;
   			while ((c = getchar()) != EOF && c != '\n')
   			{
   				if(c==' ')
   				continue;
   				else
   				{
   				
   				v.pb(c);
                count++;
              }
   			}
   			num.pb(count);
   			trace.pb(1);
   			
   			
   			
   			break;
   			case 2:
   				getl(k);
   				temp.clear();
   				while(k--)
   				{
   					char l = v.back();
   					temp.pb(l);
   					v.ppb();
   					
   				}
   				all.pb(temp);
   				trace.pb(2);
   				
   				
   				
   				break;
   				case 3:
   					getl(k);
   				    printf("%c\n",v[k-1]);
   					break;
   					
   					case 4:
   						
   						if(trace.back()==1)
   						{
   							trace.ppb();
   							count=num.back();
   							num.ppb();
   						    	while(count--)
   						    	{
   						    		v.ppb();
   						    	}
   						   
   						}
   						else
   						{ 
   						    trace.ppb();
   						    temp=all.back();
   						    all.ppb();
   							while(temp.size()!=0)
   							{
   								char l=temp.back();
   								temp.ppb();
   								v.pb(l);
							}
							
   							
   						}
   					
   						break;
   	}
    
   }
}


