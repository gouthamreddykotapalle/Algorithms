#include<bits/stdc++.h>
using namespace std;
double findmid(double,double);
#define ll long long


int main()
{
	ll t,k;
	cin>>t;
	double x,one,two;
	while(t--)
	{
		cin>>x>>k;//for every test case
		double mid;
		one=0;
		two=x;
		while(k--)
		{
			
			
			
		mid=findmid(one,two);//5
		if((mid-one) == (two-mid))
		{
		
		two=mid;
		
      	}
   		
		
		
		
	   }
		cout<<mid<<"\n";
	}
	
	
	
}

double findmid(double one,double two)
{
	
	double mid;
	mid=(one+two)/2;
	return mid;
	
	
	
	
	
}
