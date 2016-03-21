#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<string>
#define get(a) scanf("%lld",&a)
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<b;i++)
//#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	ll count,t;
	get(t);
	bool flag;
	string a,b;
	//BOOST;
	
	while(t--)
	{
	  cin>>a;
	  cin>>b;
	  flag=false;
		for(int i=0;i<a.length();i++)
		{
			if(b.find(a[i])!=string::npos)
			{
				flag=true;
				break;
				
			}
			
		}
		
		if(flag==true)
		cout<<"Yes"<<"\n";
		else
		cout<<"No"<<"\n";
		
		
	}
	
	
	
	
}
