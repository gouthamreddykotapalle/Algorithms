#include<bits/stdc++.h>
using namespace std;
#include<string>
#include<sstream>
#include<iostream>
#define ll long long

string tostring(ll);

int main()
{
	
	int t;
	ll n;
	string a;
	cin>>t;
	while(t--)//can input a string ,no problem
	{
		cin>>n;
		a=tostring(n);
		for(ll i=0;i<a.size();i++)
		{
			for(ll j=i;j<a.size();j++)
			{
				cout<<a[j];
			}
			cout<<"\n";
			
		}
		
		
	}
	
}

string tostring(ll i)
{
	
std::string s;
std::stringstream out;
out << i;
s = out.str();
return s;
	
}


