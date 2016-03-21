#include<iostream>
//#include<conio.h>
#include<string.h>
#define ll unsigned long long
using namespace std;


int main()
{
	ll tc;
	 cin>>tc;
	 ll n,m;
	 cin>>n>>m;
	 int a[m];
	 for(int i=0;i<m;i++)
	 {
	 	cin>>a[i];
	 }
	 int temp;
	 for(int i=0;i<m-1;i++)
	 {
	 	for(int j=0;j<m-i-1;j++)
	 	{
	 		if(a[j]>a[j+1])
	 		{
	 			temp=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=temp;
	 		}
	 	}
	 }
	 
	  for(int i=0;i<m;i++)
	 {
	 	cout<<a[i]<<"\n";
	 }
	 
	 //done sorting
	 ll count =0;
	 ll t=m;
	 int init=m-1;//joins
	 for(int i=0;i<m;i++)
	 {
	 	
	 	if(a[i]==(t-2))
	 	{
	 		count+=a[i];
	 		a[i]=0;
	 		t--;
	 		break;
	 	}
	 	//lesser but not equal to m-2
	 	else if(a[i]<(t-1))
	 	{
	 		count+=a[i];
	 		a[i]=0;
	 		t--;
	 		continue;
	 		
	 	}
	 	 
	 	else if(a[i]>=t)//4
	 	{
	 		count+=(t-1);
	 		break;
	 	}
	 	
	 	
	 }
	 cout<<count<<"\n";
	 
	 
	 
	 
	 
}
