#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	ll t,i;
	get(t);
	string s1,s2;
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
		if(s1.compare(s2)==0)
		{
			cout<<"equal\n";
		}
		else if(s1.compare(s2)<0)
		cout<<"first\n";
		else if(s2.compare(s1)<0)
		cout<<"second\n";
		
		
	}
	
	
	/*same length ,then normal compare, else smaller one comes first*/
	
}

