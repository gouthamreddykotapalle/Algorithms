using namespace std;
 
#include<bits/stdc++.h>
#include<vector>
#define ll long long
#include<string.h>
 
int main()
{
	ll c1,c2,t;
	string v;
	
	cin>>t;
	
	while(t--)
	{
		c1=0,c2=0;
		cin>>v;
		
		for(ll i=0;i<v.size();i++)//  - + - + - + - + - + 
		{
		   
		  if(v[i]==v[i+1])
		  {
		  	if(v[i+1]=='+')
		  	{
		  		v[i+1]='-';
		  		
		  	}
		  	else
		  	{
		  	
		  	v[i+1]='+';
		    
		  }
		  c1++;
		
		  }
		  
		
		}
		
		  c2 = v.size() - c1;
		if(c1>c2)
			cout<<c2<<endl;
		else
			cout<<c1<<endl;	
		  	
		
		
	}
}

 


