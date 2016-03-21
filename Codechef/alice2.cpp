#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
	BOOST;
    ll t,n,count,j,i,d,a,max;//30 50 67 38 56
    get(n);
    string s;
    count=0;
    
    for(i=1;i<=n;i++)
    {
    	
    	s=std::to_string(i);
    	for(i=0;i<s.length();i++)
    	{
    		t=s[i];
    		if(t==0 || t==4 || t==6 || t==8 ||t==9)
    		{
    			count++;
    			break;
    		}
    	}
    	
    }
  	
  	cout<<count<<endl;
  }
    
    


