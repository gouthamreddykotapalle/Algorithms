#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%llf",&a)
#define put(a) printf("%llf",a)
#define ll long double
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll max(vector<ll> ,ll,ll);

int main()
{
	long  double sum,t;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	long long i,count;
	cin>>t;
	while(t!=0.00)
	{
		sum=0;count=0;
		i=2;
		while(sum<t)
		{
			sum=sum+((1.00/i));
			count++;
			i++;
			//cout<<sum<<endl;
		}
		cout<<count<<" card(s)"<<endl;
		cin>>t;
	}
	
		
	}


