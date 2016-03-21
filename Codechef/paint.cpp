#include<bits/stdc++.h>
using namespace std;
#include<string.h>
#define get(a) scanf("%lld",&a)
#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define FOR(i,a,b) for( ll i = a; i <= b; i++ )

int main()
{
	
	ll n,count,k,p,t;
    string a;
    get(t);
	while(t--)
	{
		get(n);get(k);
		cin>>a;
		count=0;
		
		FOR(i,0,n-1)
				 if( a[i] == 'R' )
		 	a[i] = 1;
		 else if( a[i] == 'G' )
		 	a[i] = 0;
		
		
		FOR(i,0,n-1)
			if(a[i]==1)
			{
				//cout<<p;
				FOR(j,i+1,min(n-1,i+k-1))
					a[j]=a[j]^1;
				count++;
			}
		
			cout<<count<<endl;
			
	}
	
	
	
}
