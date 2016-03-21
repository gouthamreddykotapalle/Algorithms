#include <bits/stdc++.h>
#define ll long long
#define get(a) scanf("%lld", &a)
#define repVector(v)  for( typeof(v.begin()) it = v.begin(); it != v.end(); it++ )
#define repSet(s) for( typeof(s.begin()) it = s.begin(); it != s.end(); it++ )
#define all(c) c.begin(), c.end()
#define MEM(a,b) memset(a,(b),sizeof(a))
#define eb emplace_back
#define pb push_back
#define FOR(i,a,b) for( ll i = a; i <= b; i++ )
#define ROF(i,a,b) for( ll i = a; i >= b; i-- )
#define debug(x) cout << "[DEBUG] " << #x << " = " << x << endl;
#define matrix vector< vector<ll> >
#define F first
#define S second
#define mp make_pair
#define MOD 1000000007
#define INPFILE freopen("input.in","r",stdin)
using namespace std;
 
int main(){
	ll t,n1,n2,m;
	get(t);
	while( t-- )
	{
		
		get(n1);get(n2);get(m);
		for(int i=1;i<=m;i++)
		{
			if(i<=n1 && i<=n2)
			{
				n1-=i;
				n2-=i;
			}
			else
			{
				break;
			}
		}
		cout<<n1+n2<<endl;
		
		
		
		
		
		
		
	}
}
