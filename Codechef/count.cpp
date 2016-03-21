#include<iostream>
//#include<conio.h>
#include<string.h>
#define ll unsigned long long
using namespace std;
ll calc(ll);
int main()
{
	ll t;
	 cin>>t;
	 ll a[t];
	for(int i=0;i<t;i++)
	 	cin>>a[i];
	 	
	 	for(int i=0;i<t;i++)
	 	{
	 	
	    a[i] = calc(a[i]);
	    
	    
	    
	}
	
	for(int i=0;i<t;i++)
	 	cout<<a[i]<<"\n";
	
	
	
}

ll calc(ll n)
{
	int i=0,m;
	while(n>0)
	{
		m=n%10;
		if(m==4)
		{
			i++;
		}
		n=n/10;
		
	}
	return i;
	
}
