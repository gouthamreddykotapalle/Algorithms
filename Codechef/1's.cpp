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
ll min(ll,ll);//or macro
//pointer function
int main()
{
	ll i,s,n,r,t,k,sum,p;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	getl(p);
	while(p--)
	{
   getl(n);
   int v[32]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
   	t=31;
   while(n>0)
   {
   	r=n%2;
   	n=n/2;
   	if(r==1)
   	v[t--]=0;
   	else
   	v[t--]=1;
   }
   
   ll two=0;sum=0;
   for(i=31;i>=0;i--)
   {
   	sum+=v[i]*pow(2,two++);
   }
   cout<<sum<<endl; 
}
}

