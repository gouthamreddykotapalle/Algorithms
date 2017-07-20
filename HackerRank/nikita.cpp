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
#define mapi map<char,ll>::iterator
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
	llu i,j,n,k,t,sum,a,b,c,count,r,first,last,p;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
    getu(t);
    while(t--)
    {
    	getu(n);
    	vector<llu> v;
    	sum=0;
        for(i=0;i<n;i++)
        {
        	getl(a);
        	v.pb(a);
        	sum+=a;
        }
        i=0;j=n-1;
        first=0;
        last=sum;
        count=0;
        while(i<j)
        {
        first=0;
        /*if(sum==0)
        {
        	count=n-1;
        	break;
        }*/
        for(p=i;p<=j;p++)
        {
        	first+=v[p];
        	last-=v[p];
        	if(first==last)
        	{
        		cout<<p<<" "<<i<<" "<<j<<" "<<first<<" "<<last<<endl;
        		if((i-j)%2 == 1)
        		{
        			if((i-j+1)/2==(p+1))
        			{
        				for(i=0;i<n;i++)
        			}
        		}
            	count++;
        	 if(p<((i+j)/2))
			 {
			 	i=p+1;
			 	break;
			 }	
			 else
			 {
			 	j=p;
			 	break;
			 }
        		
        	}
        }
        
        if(first!=last)
        break;
        
        }
        putu(count);
    
	}
	}
