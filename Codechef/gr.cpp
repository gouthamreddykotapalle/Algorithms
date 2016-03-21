#include<bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>
#define ll long long

char calc(int,int,int);

int main()
{
	
	ll n,f,t,s,count;
	vector<ll> v;
    scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&f);
		count=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&s);
			v.push_back(s);
		}
		for(int i=0;i<v.size()-1;i++)// 2 2 2
		{
			
			for(int j=i+1;j<v.size();j++)
			{
				
				if(v[i]>v[j])
				{
					if(calc(v[i],v[j],f)=='y')
					 count++;
				}
				else
				{
				
				if(calc(v[j],v[i],f)=='y')
				count++;
			   }
			}
		}
		cout<<count<<endl;
		
		
	}
}


char calc(int g,int l,int f)
{
	float k=(float)g;
	float l2=(float)l;
	
	while(k>=l2)
	{
		if(k==l2)
		return 'y';
		k/=f;
	}
	return 'f';
	
	
	
}
