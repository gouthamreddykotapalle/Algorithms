#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<vector>
#include<map>
#define ll long long
#define repVector(v)  for( typeof(v.begin()) it = v.begin(); it != v.end(); it++ )


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
	cin>>n;
	ll sum;
	//n==3 -> 0 1 2 3 4-->  1 2 3 4 5 
	
	ll first=1,last=n+1;
	
	if(n%2==0)
	{
		 sum=0;
	 /*while(first!=last)
	 {
	 
		sum = sum+2*(last-first);
		first++;//2
		last--;//4
		sum++;
		
	}*/
	//when first == last -> ++sum (included on top)
	sum=(n*(n+1)/2)+n;
		
	}
	else
	{
		sum =-1;
		while(first < last)
		{
		//n==3 -> 0 1 2 3 --> 1 2 3 4
		//for even lights and odd n
		     sum++;
			sum = sum+2*(last-first);
			first++;//2
		    last--;//4
		    
		}
		
		
	}
		cout<<sum<<"\n";
		
	}
}
	
