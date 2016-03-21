
using namespace std;
#include<bits/stdc++.h>
#include<vector>
#include<map>
#define ll long long
#define  ma  map<char,ll>
#define  it map<char,ll>::iterator


int main()
{

	ll n;
	cin>>n;
	string str;
	

	
  while (n--)
  {
  	cin>>str;
  	ma m;
  
	
	for(ll i=0;str[i]!='\0';i++)
	{

				m[str[i]]++;
			
	
	}
	 it mi = m.begin();
	 ll sum=0,max=0;
	 
while(mi!=m.end())

{

    sum = sum + mi->second;
    if(max<mi->second)
    max=mi->second;
	mi++;
}	
  if(max*2 == sum)
  cout<<"YES\n";
  else
  cout<<"NO\n";

	

}

	
}
