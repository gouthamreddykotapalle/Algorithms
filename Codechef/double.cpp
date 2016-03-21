#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

bool check(string);
bool delcheck(ll,string);

int main()
{
	ll i,t;
	get(t);
	bool flag;
	string a;
	//BOOST;
	
	while(t--)
	{
		cin>>a;
		flag=false;
		if((a.length())%2==0)
		{
		
			if(check(a)==true)
			printf("YES\n");
			else
			printf("NO\n");
		}
		else
		{
			for(i=0;i<a.length();i++)//dsddsdsdsdsdd
			{
			    	if(delcheck(i,a) == true)
			    	{
			    	flag=true;
			    	break;
			    }
			}
			if(flag==true)
			printf("YES\n");
			else
			printf("NO\n");	
		}
	}
}


bool delcheck(ll i,string str)
{
	str.erase(i,1);
	if(check(str)==true)
	 return true;
	else
	return false;
	
}

 bool check(string str)
 {
 	 string single="",doubl="";
 	 ll half= str.length()/2;//2
 	 ll full= half*2;//4
 	 for(ll i=0;i<half;i++)
 	 {
 	 	single.pb(str[i]);
 	 	
 	 }
 	 for(ll i=half;i<full;i++)
 	 {
 	 	doubl.pb(str[i]);
 	 	
 	 }
 	 if(single.compare(doubl)==0 )
 	 return true;
 	 else
 	 return false;
 	
 }



