#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

ll check(vector<vector<ll> >);

int main()
{
	BOOST;
    ll t,n,count,j,i,d,a,s,max;//30 50 67 38 56
    get(n);
    //98
    if(n>10)
    {
    
    d=n%10;//8
    n=n-d;//90
    count+=n/2;
    n=d;
    }
  	if(n==4 || n==5)
  	{
  		count+=1;
  	}
  	else if(n==6 || n==7)
  	{
  		count+=2;
  	}
  	else if(n==8)
  	{
  		count+=3;
  	}
  	else if(n==9)
  	count+=4;
  	else if(n==10)
  	count+=5;
  	
  	cout<<count<<endl;
  }
    
    


