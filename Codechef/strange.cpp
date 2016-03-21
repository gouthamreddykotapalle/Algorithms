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
	ll t,n,s,j,sum,k;
	bool flag= true;
	get(t);
	while( t-- ){
	
	
	get(n); get(k);
	vector<ll> a;
	for(ll i=0;i<n;i++)
	{
		cin>>s;
		a.push_back(s);
	}
   
     int sum=0;
     for(int i=0;i<n;i++)
     {
     	sum=sum+a[i];
     }
     
     while(k--)
     {
     	s = sum +1;
     	sum = sum + s;
     	a.push_back(s);
     	//cout<<s<<endl;
     }
     
     
     if(a.back()%2==0)
     cout<<"even"<<endl;
     else
     cout<<"odd"<<endl;
     
}
}
