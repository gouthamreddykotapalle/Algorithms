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
 
int main(){
	ll t; cin >> t;
	while( t-- ){
		string s;
		cin >> s;
		ll a[1000] = {0};
		FOR( i,0,s.size()-1)
			a[int(s[i])]++;
			
		if( a['L'] >= 2 && a['T'] >= 2 && a['I'] >= 2 && a['M'] >= 2 && a['E'] >= 2 )
			cout << "YES\n";
		else if( a['L'] >= 2 && a['T'] >= 2 && a['I'] >= 2 && a['M'] >= 2 && a['E'] >= 1 && s.size() == 9  )
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
