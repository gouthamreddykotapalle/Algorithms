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
ll t,n,k,i,j,a,sum,max;//30 50 67 38 56
  get(t);
  k=t;
  vector<ll> v;
  while(t--)
  {
     get(n);
     v.pb(n);
  	
  }	
  max=0;
  sort(v.begin(), v.end());
  for(i=0;i<k;i++)
  {
  	a=v[i];
  	sum=0;
  	for(j=i;j<k;j++)
  	{
  		if(a<=v[j])
  		sum+=a;
  	}
  	//cout<<sum<<endl;
  	if(max<sum)
  	max=sum;
  }
  cout<<max<<endl;

}

