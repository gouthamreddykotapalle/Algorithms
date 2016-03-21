#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%llu",&a)
#define put(a) printf("%lld",a)
#define ll  unsigned long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	ll n,i,b,a,t,p,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
		get(a);get(b);
		a=a%10;
		if(b>4)
		b=b%4;
		p=pow(a,b);
		cout<<p%10<<endl;
		
	}
}

