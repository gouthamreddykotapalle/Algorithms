#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lf",&a)
#define ll long long
#define pb push_back
#include<string>
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
  string n,k,word;
  ll i,count;
  string space=" ";
    cin>>n;
    cin>>k;
    count=0;
    	for(i=0;i<n.length();i++)
    	{
    		if(n.at(i)==" ")
    		{
    			count++;
    		}
    	}
    	        count++;
   			    string arr[count];
			    i = 0;
			    stringstream ssin(n);
			    while (ssin.good() && i < count){
			        ssin >> arr[i];
			        ++i;
			    }
			    for(i = 0; i < count; i++){
			        if()
			    }
    		
    	}
    	
    	
 bool is_anagram(std::string s1, std::string s2)
{
  std::sort(s1.begin(), s1.end());
  std::sort(s2.begin(), s2.end());
  return s1 == s2;
}
  

