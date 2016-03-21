#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define repVector(v)  for( typeof(v.begin()) it = v.begin(); it != v.end(); it++ )


int main()
{
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	repVector(v)//type of for iterator
	{
		cout<<*it<<"\n";
	}
	
	
	
	
	
}
