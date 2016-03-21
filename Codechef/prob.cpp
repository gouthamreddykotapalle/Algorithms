#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
ll gcd(ll,ll);

int main()
{
	BOOST;
	ll t,res,mul;
	ll n,m,p,count;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		mul=m*n;
		count=0;
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if((i+j)%2!=0)
				{
					count++;
				}
			}
		}
		//cout<<count;
	res=gcd(count,mul);
	if(res>1)
	{
		cout<<count/res<<"/"<<mul/res;
	}
	else
	cout<<count<<"/"<<res;
		
		
		
		
	}
	
}

ll gcd( ll x, ll y )
{
   if( x < y )
      return gcd( y, x );

   ll f = x % y;
   if( f == 0 )
     return y;
   else
      return gcd( y, f );
}


