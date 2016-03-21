#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long
#include<algorithm>
#define pb push_back
#define ite vector<char>::iterator
char palin(vector<char>);

 int main()
 {
 	
 	vector<char> v;
 	ll t;
 	cin>>t;
 	char c;
 	while(t--)
 	{
 	
 	   cin>>t;
 	   char ret;
 	   while((c=getchar()) != '\n')//take input
 	   {
 	   	v.pb(c);
 	   }
 	 
 	   	ret = palin(v);
 	   	if(ret == 'y')
 	   	{
 	   		cout<<"YES\n";
 	   		break;
 	   }
 	   else
 	   cout<<"NO\n";//try recursive
 	   
 		
 		
 		
 		
 	}
 }
 
    char palin(vector<char> v)
    {
    bool flag= true;
    	ll len=v.size();
    	for(int i=0;i<len;i++)
    	{
    		if(v[i]!=v[len-1-i])
    		{
    			flag= false;
    			break;
    		}
    	}
    	if(flag==true)
    	return 'y';
    	else
    	return 'n';
    	
    	
    }
     
     
 
 
 
 
