#include<iostream>
#include<string.h>
#define ull unsigned long long
using namespace std;

int main()
{
	int t;
	ull sum;
	ull n,k;
	cin>>t;

	while(t--)
	{
		
   
	cin>>n>>k;
	ull a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		} 
	
		for(int i=0;i<k;i++)
		{
			sum=0;
			for(int j=0;j<n;j++)
			{
				 
				sum=sum+a[j];
			}
			n++;
			a[n-1]=sum+1;
		}
		if(a[n-1]%2==0)
		{
			cout<<"even"<<"\n";
			
			
		}
		else
		cout<<"odd"<<"\n";
		
		
		
	}
	
	
	
}
