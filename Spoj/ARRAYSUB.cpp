#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	BOOST;
	ll n,i,maxi,a,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(n);

    int v[n];

    for(i=0;i<n;i++)

        get(v[i]);

   get(k);
    for(i=0;i<=n-k;i++)
	{
			maxi=v[i];
			    for( j=1;j<k;j++)
				{
					if(maxi<v[i+j])
					{
						maxi=v[i+j];
					}
					
				}
			cout<<maxi<<" ";
		
		
	}
	
}


