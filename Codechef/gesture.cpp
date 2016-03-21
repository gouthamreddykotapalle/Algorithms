#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long
#include<algorithm>
#define pb push_back

 int main()
 {
 	ll t,n;
 	char a;
 	cin>>t;
 	while(t--)
 	{
 		vector<char> v;
 		cin>>n;
 		for(int i=0;i<n;i++)
 		{
 			cin>>a;
 			v.pb(a);
 		}
 		
 		if (find(v.begin(), v.end(), 'I') != v.end())
			{
			  // Element in vector.
			  cout<<"INDIAN\n";
			  
			}
			else if(find(v.begin(), v.end(), 'Y') != v.end())
			{
				cout<<"NOT INDIAN\n";
			}
			else
			{
				cout<<"NOT SURE\n";
			}
 		
 		
 	}
 	
 	
 }
