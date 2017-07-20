using namespace std;
#include<bits/stdc++.h>
#include<algorithm>
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
map<ll,ll> m;
int main()
{
 ll q,a,b;
 BOOST;
 getl(q);
 while(q--)
 {
   getl(a);getl(b);
   if((a%2)==1 || (b%2)==1)
   {
   
	   if((a%2)==1)
	   {
	     if(b%2==1)
	     {
	     if(abs(a-b)==2)
	     printf("YES\n");
	     else
		     printf("NO\n");
	     }
	     else
	     {
		     if(b==a+1 )
		     printf("YES\n");
		     else
		   	printf("NO\n");
	   }
	   }
	   else if((b%2)==1)
	   {
	       if(a%2==1)
		     {
		     if(abs(a-b)==2)
		     printf("YES\n");
		     else
		     printf("NO\n");
		     }
	     else
	     {
	   if(a==b+1)
	     printf("YES\n");
	     else
	   printf("NO\n");
	   }
	   }
	   
	   
	   //printf("ji");
   }
   else if((a%2)==0 && (b%2)==0)
   {
	   if(a==b+2 || a==b-2)
	     printf("YES\n");
		   else
		   printf("NO\n");
   
   }
 }



}
	
