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
ll t,n,k,i,j,a,sum,m2,m3;
  get(t);
  while(t--)
  {
  	multiset<ll> m;
  	 multiset <ll>::iterator it2;
  	get(n);get(k);
  	sum=0;
  	for(i=0;i<n;i++)
  	{
  		get(a);
  		m.insert(a);
  	}
  		for (multiset<ll>::iterator it=m.begin(); it!=m.end(); ++it)
        sum+=*it;
        
  	while(sum!=0 && k>0)
  	{
       it2 = m.end();
        m2=*(--it2);
        m.erase(it2);
        if(m2>0)
        {
        sum--;
        m2-=1;
        }
        
         it2 = m.end();
        m3=*(--it2);
        m.erase(it2);
        if(m3>0)
        {
        sum--;
        m3-=1;
        }
        //cout<<sum<<" "<<k<<endl;
        
        m.insert(m2);
        m.insert(m3);
        k--;
        
       
     }
     if(sum==0)
     cout<<"YES\n";
     else
     cout<<"NO\n";
  	
  }	

}

