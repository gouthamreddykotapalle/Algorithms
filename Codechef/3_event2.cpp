#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#include<climits>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll check(vector<vector<ll> >);

int main()
{
	ll i,init,n,c,p,d,min,f;
	vector<vector<ll> > matrix;	
	get(n);
		
		for(i=0;i<n;i++)
		{
			vector<ll> row;
			get(c);get(p);get(d);
			row.pb(c);
			row.pb(p);
			row.pb(d);
			matrix.pb(row);
		}
		init=0;
		for(i=0;i<n;i++)
		{
			init+=matrix[i][0];
		}
		min=LLONG_MAX;
		
		for(i=0;i<n;i++)
		{	
           f=init+matrix[i][1]+matrix[i][2];
           
           if(f<min)
           {
           	min=f;
           }
           
		}
		cout<<min<<endl;
	}
	
	

