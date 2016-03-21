#include<iostream>
//#include<conio.h>
#include<string.h>
using namespace std;
char is_prime(int);

int main()
{
	int t;
	int a,b;
	cin>>t;//3
	int final[t];
	int j=0;
	while(t--)
	{
		cin>>a>>b;
		int c=a+b;
		int p=c;
		while(is_prime(++p)=='n')
		{
			
		}
		final[j++]=(p)-c;
	}
	for(int i=0;i<j;i++)
	{
		cout<<final[i]<<"\n";
	}
	
	
}

  char is_prime(int c)
  {
  	bool flag = true;
  	for(int i=2;i<c;i++)
  	{
  		if(c%i==0)
  		{
  		
  		flag= false;
  		break;
  		
  		}
  	}
  	if(flag==false)
  	return 'n';
  	else
  	return 'p';
  }

