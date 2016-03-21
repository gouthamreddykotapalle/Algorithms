#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define pb push_back
#define ite vector<ull>::iterator
#define ull unsigned long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
ull func(ull);
ull sum(ull);


 int main()
 {
 	BOOST;
 	ull t;
 	cin>>t;
 	ull a,d,l,r;
 	ull val;
 	
 	while(t--)
	{
		vector<ull> v;
		cin>>a>>d>>l>>r;
		
		for(ull i=l;i<=r;i++)
		{
			val=a+(i-1)*d;
		//	cout<<val<<" ";
			v.pb(val);
		}
		
		ull sum=0;
		
		for(ite it=v.begin();it!=v.end();++it)
		{
			sum += func(*it);
			
		}
		
		cout<<sum<<endl;
		
		
		return 0;
		
	} 	
 }
 
 ull func(ull a)
 {
 	
 	if(a<10)
 	{
 		return a;
 	}
 	else
	 {	
	 	return func(sum(a));
	 	
	 } 
 	
 }
 
 ull sum(ull a)
 {
 	ull sum=0,d;
 	while(a>0)
 	{
 		d=a%10;
 		sum+=d;
 		a=a/10;
 	}
 	return sum;
 	
 }
 
 
