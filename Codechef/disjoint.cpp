#include<bits/stdc++.h>
using namespace std;
//arr -> vector
//know how to do it
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int a[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		} 
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i]-a[j])<d)
				{
				
				sum+=a[i]+a[j];
				p=a[j];
				
			    }
			
			}
		}
		cout<<sum<<"\n";
		
		
		
		
		
	}
	
	
}
