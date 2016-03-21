#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	double a,b,c,k,r;
	int t;
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b>>c;
		k=0.5*(a+b+c);
		
		r=(a*b*c)/(4*sqrt(k*(k-a)*(k-b)*(k-c)));
		
		std::cout << std::setprecision(2) << std::fixed;
		cout<<r<<endl;
		
		
		
		
		
		
	}
}
