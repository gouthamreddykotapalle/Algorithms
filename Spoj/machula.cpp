#include<bits/stdc++.h>
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main()//fuck yourself and learn how to  solve dynamic programming
{
	ll t,i,m,a,e,p;
	get(t);
	string que;
	string n1,n2;
	while(t--)
	{
		getline(cin, que);
		for(i=0;i<que.length();i++)
		{
			if(que[i]=='+')
			{
				p=i;
				//cout<<"yes "<<p;
			}
			if(que[i]=='=')
			{
				e=i;
				//cout<<"yes "<<e;
			}
			if(que[i]=='m')
			{
				m=i;
				//cout<<"yes "<<m;
			}
			
		}	
		
		
		if(p<e && e<m)
		{
			n1=que.substr(0,p-1-0);
			n2=que.substr(p+2,e-1-(p+2));
			cout<<"hello";
			//cout<<(stoi(n1)+stoi(n2))<<endl;
		}
		else if(p<m && m<e)
		{
			n1=que.substr(0,p-1-0);
			n2=que.substr(e+2,que.length()-(e+2));
			//cout<<stoi(n2)-stoi(n1)<<endl;
		}
		else
		{
			
			n1=que.substr(0,p-1-0);
			n2=que.substr(e+2,que.length()-(e+2));
			//cout<<stoi(n2)-stoi(n1)<<endl;
		}
	
		
	}
	
	
}

