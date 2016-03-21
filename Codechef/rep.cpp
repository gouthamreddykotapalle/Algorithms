#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;





int calc(int a[],int t)
{
	int sum[t];
	bool flag = true;
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			if(i!=j)
			{
			
			sum[i]=sum[i]+a[j];
			
	      	}
		
		}
		
	}
	
	for(int i=0;i<t-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			flag=false;
		}
	
	}
	if(flag==true)
	{
		return 1;
	}
}


int main()
{

	int a[50];
		int n;
	cin>>n;
	
	string str[n];
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>str[n];
	}
	
	for(int j=0;j<n;j++)
	{
		t=0;
	
	for(int i=0;str[j][i]!='\0';i++)
	{
		for(int k=i;str[j][k]!='\0';k++)
		{
			if(str[j][i] == str[j][k])
			{
				a[t]++;
			}
		}
		t++;
	}
	//computer here
	int result = calc(a,t);
	if(result == 1)
	{
		cout<<"YES\n";
	}
	
	
	for(int i=0;i<50;i++)
	  a[i]=0;
}


	
}
