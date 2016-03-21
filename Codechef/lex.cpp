#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
char* sort(char[],int);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int n;
    
    for(int p=0;p<t;p++)
        {
          cin>>n;
              char a[n][n];//3*3
              char tot[n*n];//9
              int s=0;
              for(int j=0;j<n;j++)
              {
                cin>>a[j];
               
          }
          
          for(int j=0;j<n;j++)
          {
          	for(int k=0;k<n;k++)
          	{
          		tot[s]=a[j][k];
          		s++;
          	}
          }
          tot[s]='\0';//9//loop till 9 ie <9
          int l=0;
          
          
          
          
         char *ret =sort(tot,s);
         
       
		 for(int j=0;j<n;j++)
		 {
		 	for(int k=0;k<n;k++)
		 	{
		 		a[j][k]=ret[l];
		 		l++;
		 	}
		 }
		 
		 
     /*     for(int j=0;j<n;j++)//cout on 2-d not working
		 {
		 	for(int k=0;k<n;k++)
		 	{
		 		cout<<a[j][k];
		 	}
		 	cout<<"\n";
		 }*/
          
        
         }
         
         for(int i=0;i<t;i++)
         {
         	cout<<"YES"<<"\n";
         }
    
    return 0;
}


    char* sort(char *a,int n)//9
    {
    	
    
    	char temp;
    	for(int i=0;i<n-1;i++)//<9
    	{
    		for(int j=0;j<n-i-1;j++)//login mistake
    		{
    			if(a[j]>a[j+1])
    			{
    				temp=a[j];
    				a[j]=a[j+1];
    				a[j+1]=temp;
    			}
    		}
    	}
    
    	return (a);
    	
    }




