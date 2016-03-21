#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

bool integral(ll,ll);

int main()
{
	
	ll i,j,n,c,x,k,b,a,t,s;
	get(t);
	bool flag;
	while(t--)
	{
		flag=false;
	   get(n);
	   if(n%2==0)
	   i=n+2;
	   else
	   i=n+1;
	   while(i<2*n)
	   {
		   	if(integral(n,i))
		   	{
		   	  flag=true;
		   	  break;
		   	}
		   	i+=2;
	   }
	   if(flag)
	   cout<<"YES\n";
	   else
	   cout<<"NO\n";
	   return 0;
   
  }
   	
   }

 bool integral(ll n,ll i)
 {
 	float m;
 	m=(sqrt(4*n*n - i*i))/2;
 	if(ceil(m)==m)
 	return true;
 	else
 	return false;
 	
 }


