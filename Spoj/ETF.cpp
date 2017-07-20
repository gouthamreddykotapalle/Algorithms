#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld\n",a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

void seive(ll);
bool prime[1000000+5];

int main()
{
	ll n,i,s,a,t,k,count;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	seive(1000000+5);
	while(t--)
	{
		get(n);
		if(n==1)
		{
		 printf("1\n");
		 continue;
		}
		if(prime[n])
		{
		 put(n-1);
		 continue;
		}
		count=0;
		for(i=2;i<n;i++)
		{
		if(__gcd(n,i)==1)
		count++;
		}
		put(count+1);
	
		
	}
}

void seive(ll n)
{
    memset(prime, true, sizeof(prime));
 
    for (ll p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

