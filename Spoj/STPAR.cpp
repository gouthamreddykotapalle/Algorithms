#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll long long
#define pb push_back
#include<string>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll max(vector<ll> ,ll,ll);

int main()
{
	ll n,i,s,a,t,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(n);
	while(n!=0)
	{
	    vector<ll> v;stack<ll> s;
		for(i=0;i<n;i++)
		{
			get(a);
			v.push_back(a);
		}
		j=1;
		for(i=0;i<n;i++)
		{
			if(v[i]==j)
			{
			  j++;	
		     //cout<<j<<endl;
			}
			else if(!s.empty())
			{
			
			     if(s.top()==j)
			     {
					 s.pop();  		
					 j++;
					 i--;
				
			    }
			    else
				{
					s.push(v[i]);
					
				}	
			}
			else
			{
				s.push(v[i]);
				
			}	
			//cout<<j<<endl;
		}
		while(j!=n+1)
		{
			if(!s.empty())
			{
			if(s.top()==j)
			  {
			  	s.pop();
			  	j++;
			  }
			  else
			  {
			  	break;
			  }
		    } 
		    else
		    {
		    	break;
		    }
		}
		if(j==n+1)
		cout<<"yes\n";
		else
		cout<<"no\n";
		//cout<<j;
		get(n);
	
	}
}
	    
