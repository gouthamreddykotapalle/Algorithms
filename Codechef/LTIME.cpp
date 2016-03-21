#include<iostream>
//#include<conio.h>
#include <vector>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
char check(string );

int main()
{
	    int n;
		cin>>n;
		string name[n];
		for(int i=0;i<n;i++)
		{
			
			cin>>name[i];
			
				if(check(name[i])=='y'&& name[i].size()<=100)
			{
				cout<<"YES"<<"\n";
			}
			else
			{
				cout<<"NO"<<"\n";
			}
			
			
		}
	
		
		
     	
		
	
}


  char check(string name)
  {
  	int arr[5];
  	bool flag= true;
  	for(int i=0;i<5;i++)
  	{
  		arr[i]=0;
  	}
  	//LTIME EMITL
  	for(int j=0;name[j]!='\0';j++)
  		{
  			switch (name[j])
  			{
  				case 'L':
  					arr[0]++;
					  break;
  					
  					case 'T':
  					arr[1]++;
					  break;
  					
  					case 'I':
  					arr[2]++;
					  break;
  					
  					case 'M':
  					arr[3]++;
					  break;
  					
  					case 'E':
  					arr[4]++;
					  break;
  					
  					default:
  						break;
  			}
  			
  			
  		}
  		
  		for(int j=0;j<5;j++)
  			{
  				if(arr[j]<2)
  				{
  					flag=false;
  					//break;
  					//cout<<arr[j];
  				}
  				
  			}
  			if(flag==true)
  			 return 'y';
  			 else
  			 return 'n';
  		
  	
  	
  }
		
		
		
