#include<string.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int **a;//array of pointers for MD array
	a=new int*[3];//first pointer(outer)
	cout<<"enter the array integers\n";
	for(int i=0;i<3;i++)//simple pointers stuff(no confucion at all) - just analyze
	a[i]= new int[3];
	
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
		cin>>a[i][j];
	}
	
	
	for(int i=0;i<3;i++)
	{
	
	for(int j=0;j<3;j++)
	{
		cout<<a[i][j]<<" ";
	}
	
	cout<<"\n";
}
	
}
