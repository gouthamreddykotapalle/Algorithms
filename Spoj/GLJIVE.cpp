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
	ll i,j,n,k,t,sum,a,b,c,count,r,max,maxr;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	t=10;
	vector<ll> v;
	sum=0;
	count=0;
	c=0;
    ll sumr=0;
    while(t--)
    {
     getl(a);
     sumr+=a;
     if((sum+a)<100)
     {
       sum+=a;
     }
     else
     {
     	c++;
     	if(c==1)
        {
     	max=abs(sum-100);
		 maxr= abs(sum+a-100);
     	if(max>=maxr)
     	count=sum+a;
     	else if(max< maxr)
     	count=sum;
       }
     }
	}
	if((sumr)<=100)
	putl(sumr);
	else
	putl(count);
	}
