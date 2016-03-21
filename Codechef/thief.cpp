#include<iostream>
//#include<conio.h>
#include<string.h>
#define ll  long long
using namespace std;


int main()
{
	ll tc,count;
	 cin>>tc;
	 int m,x,y;
	 ll arr[tc];
	 bool zeroflag,hundredflag;
	 ll l=0;
	 
	 while(tc--)
	 {
	 	count =0;
	 	zeroflag=false;
	 	hundredflag= false;
	 
	 
	 cin>>m>>x>>y;
	 ll a[m];
	 ll min[m],max[m];
	 
	 
	 for(ll i=0;i<m;i++)
	 {
	 	cin>>a[i];
	 }
	 ll capacity=x*y;
	 //----------------------------
	 
	 
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
	 
	 //-----------------------------
	 
	 for(int i=0;i<m;i++)
	 {
	 
	 		min[i]=a[i]-capacity;//1
	 		//cout<<min[i]<<"\t";
	 
	 		max[i]=a[i]+capacity;//41
	 		//cout<<max[i]<<"\n";
	 	
	 }
	 
     for(int i=0;i<=m-2;i++)
	 {
	 	if(max[i]<min[i+1])
	 	{
	 		count+=min[i+1]-max[i]-1;
	 	}
	 	if(min[i]<0)
	 	{
	 		zeroflag = true;
	 	}
	 	if(max[i]>100)
	 	{
	 		hundredflag = true;
	 	}
	 	}
	 
	 
	 if(min[0]>1 && zeroflag == false)
	 {
	 	count+=min[0]-1;
	 }
	 if(max[m-1]< 100 && hundredflag == false)
	 {
	 	count+=100-max[m-1];
	 }
	 

	 arr[l++]=count;
	 
	 
}//end of while

for(ll i=0;i<l;i++)
{
	cout<<arr[i]<<"\n";
}
	
	 
	 
}
	 

