#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll check(vector<vector<ll> >);

int main()
{
	BOOST;
	ll i,t,n,c,p,d,count,f;
get(t);
while(t--)
{

	get(n);

     i=2;
     count=0;
   for( i = 2; i<=n/2; i++){
    if(n%i==0)
        count++;
}
    count+=2;
    if(count%2==0)
    {
    	cout<<"NO\n";
    }
    else
    cout<<"YES\n";
}    
    
}    
