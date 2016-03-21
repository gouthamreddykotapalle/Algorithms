#include<bits/stdc++.h>
#include<string.h>
using namespace std;
char * reverse(char[],int);
 
int main(){

	int t;
	cin>>t;
	
	while(t--)
	{
		char act[10000];
		char* rev;//a pointer to a loaction which collectes the address of 
		bool flag=true;
		cin>>act;
		rev=reverse(act,strlen(act));
		//cout<<rev;
		for(int i=0;i<strlen(act)-1;i++)
		{
			if(abs(act[i]-act[i+1])!=abs(rev[i]-rev[i+1]))
			{
				flag=false;
				//cout<<abs(act[i]-act[i+1])<<"\n"<<abs(rev[i]-rev[i+1]);
				break;
			}
		}
		if(flag==true)
		cout<<"Funny\n";
		else
		cout<<"Not Funny\n";
		
		
		
		
	}
	
}


char* reverse(char str[],int t)
{
	int j=0;//can i do pointer manipulaitions?
	static char reverse[10000];
	for(int i=t-1;i>=0;i--)
	{
		reverse[j]=str[i];
		j++;
	}
	j='\0';
	return reverse;//address of reverse is returned
	
	
	
	
}

