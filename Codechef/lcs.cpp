#include<bits/stdc++.h>
using  namespace std;

int main()
{
	int t;
	string a,b;
	cin>>t;
	while(t--)
	{
		cin>>a;
		int j=0;
		b[j++]=a[0];
		for(int i=1;i<strlen(a);i++)
		{
			for(int k=0;k<i;k++)
			{
				if(a[i]==a[k])
				{
				flag = false;
				break;
				
		      	}
			
			
			}
			if(flag==true)
			{
				b[j]=a[i];
			    j++;
			}
			else
			{
				cout<<b;
			}
		}
		
		
		
		
		
	}
	
	
	
}
