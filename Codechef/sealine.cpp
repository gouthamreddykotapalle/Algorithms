#include <bits/stdc++.h>
typedef long long ll;
#define get(a) scanf("%lld", &a)
#define repVector(v)  for( auto it = v.begin(); it != v.end(); it++ )
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define FOR(i,a,b) for( ll i = a; i <= b; i++ )
#define ROF(i,a,b) for( ll i = a; i >= b; i-- )
#define debug(x) cerr << "[DEBUG] " << #x << " = " << x << endl
#define matrix vector< vector<ll> >
#define F first
#define S second
#define mp make_pair
#define L 2*r
#define R 2*r+1
#define INPFILE freopen("input.in","r",stdin)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
 
 
ll num[105] = {0};
 
int main() {
	ll t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		vector<ll> q;
		ll v[105] = {0};
 
		ll ans = 0;
		FOR(i,1,n) {
			cin >> v[i];
			ll pos = v[i];
			
			if( v[i] == 0 ) {
				q.insert( q.begin(), i );
			}
			
		    ll f = 0, s = 0;
		    for( ll  k = 0; k < q.size(); k++ )
		     if( q[k] == pos ) {
				f = k+1; s = q.size() - k - 1;
		  	    q.insert( q.begin()+k+1, i );
				break;
			 }
			
			ans += min( f, s );
	//		debug(ans);
		}
		
		cout << ans << '\n';
	}
} 


