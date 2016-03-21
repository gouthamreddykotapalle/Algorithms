#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	ll t,i,s,sum,d=0;
	cin>>t;
	while(t--)
	{
		cin>>s;//we need to sum to this
		sum=0;
		d=0;
			while(sum!=s)
			{
		
			i=1;
	     	while(i<=(s-sum))
	     	{
	     	if(i*2 <= (s-sum))
		     i=i*2;
		     else 
			 break;
		     
		    }
		     
		     d++;
		     sum+=i;
		     
		 }
		 
		 cout<<d<<endl;
			
			
		}
        
	
	
}
