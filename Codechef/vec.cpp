#include<bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>


int main()
{
	
	vector<char> v;
	int t,count;
	string a;
	cin>>t;
	while(t--)
	{
	cin>>a;
	count=0;
	for(int i=0;i<a.size();i++)
	{
	   if(a[i]=='<')
	   {
	   	v.push_back(a[i]);
	   }
	   else
	   {
	    if(!v.empty())
	    {
	    
	   v.pop_back();
	   count++;
	   
       }
      }
	}
	cout<<2*count;
	
}
	
	
	
	
	
}
