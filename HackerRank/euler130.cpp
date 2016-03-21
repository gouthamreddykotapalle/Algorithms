using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define get(a) scanf("%llu",&a)
#define put(a) printf("%lld",a)
#define ll unsigned long long
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
ll ai(ll);
bool prime(ll);
ll gcd(ll);
ll dig(ll);
//pointer function
int main()
{
	ll n,i,s,a,l,r,d,t;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(l);get(r);
	for(i=l;i<=r;i++)
	{
	 	if(prime(i)==false && gcd(i)==1)
	 	{
	 		d=ai(i);
	 		if(d!= -1)
	 		if((i-1)%d==0)
	 		cout<<i<<endl;	
	 	}	
	}
}

ll ai(ll d)
{
 	ll j=0;
 	ll num=0;
 	while(j<=19)
 	{
 		num=num*10+1;
 		j++;
 		if(num%d==0)
 		{
	 		return j;
	 	}
 	}
 	return -1;
 }		



bool prime(ll i)
{
	for(ll j=2;j<=i/2;j++)
	{
		if(i%j==0)
		return false;
	}
	return true;
}

ll gcd(ll i)
{
	ll a=i,b=10;
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;	
	}
	return a;
	
}


