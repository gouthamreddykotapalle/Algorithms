#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t,a,b,start,end;
	cin>>t;

		int n,k,p;
		cin>>n>>k>>p;
		int arr[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		
	while(p--)
	{
	//	cout<<"hi";
		cin>>a>>b;
		start=a;
		end=b;
		bool flag = true;
		for(int i=1;i<=n;i++)
		{
			if(abs(arr[start]-arr[i])<=k && a!=i)
			{
				start=i;
				i=0;
			}
			if(start==end)
			{
				flag=true;
				break;
			}
			
		}
		if(flag==true)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
		
		
	}
		
	
	
}
