#include <bits/stdc++.h>
#define ll long
#define FOR(i,a,b) for( ll i = a; i <= b; i++ )
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#include<string.h>
using namespace std;
 
int main() {
//	INPFILE;
BOOST;
	ll t; cin>>t;
	while(t--) {
		ll n, k;
	cin>>n>>k;
		string s;
		cin >> s;
		
		ll ans = 0;
		
		FOR(i,0,n-1)
		 if( s[i] == 'R' )
		 	s[i] = 1;
		 else if( s[i] == 'G' )
		 	s[i] = 0;
		 
		
		FOR(i,0,n-1) 
 		 if( s[i] == 1 ) {
 		 	ans++;
 		 	FOR(j,i+1,min(i+k-1,n-1))
 		 	 s[j] ^= 1;
		 }
		
		 
		cout << ans << endl;
		 	
	}
} 
