#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main()
{
	map<char,int> m;
	vector<int> v;
	v.push_back(5);
	v.push_back(13);
	
	vector<int>::iterator c = v.begin();
	while(c!=v.end())

{
	cout<<*c<<"\n";
	c++;
}	


     m['a']=10;
     m['b']=20;
     m['c']=30;
     m['d']=40;
     
     map<char,int>::iterator mi = m.begin();
	while(mi!=m.end())

{
	cout<<mi->second<<"\n";
	mi++;
}	
     
     
     
	
}
