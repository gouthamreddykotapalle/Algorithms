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
ll t,n,count,j,i,a,s,max;//30 50 67 38 56
float h;
  get(n);
  bool flag;

 for(s=0;s<n;s++)
 {
 	flag=true;
 	count=0;
 	get(a);
     count = sqrt(a);
    for(j=2;j<=sqrt(count);j++)
    {
    	if(count%j==0)
         flag=false;
         
    }
    if(flag==true)
     printf("golden ball is selected.\n");
     else
    printf("silver ball is selected.\n");
 }

}

