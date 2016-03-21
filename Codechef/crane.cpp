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
ll t,n,k,i,h,a,sum,max;//30 50 67 38 56
  get(n);get(h);
  bool flag=true,has;
  vector<ll> v;
 
 for(i=0;i<n;i++)
 {
 	get(a);
 	v.pb(a);
 }
 i=0;
 has=false;
 while(flag)
 {
 	get(a);
 	switch(a)
 	{
 		
 		case 0:
 			flag=false;
 			break;
 			case 1:
 				if(i!=0)
 				i--;
 				break;
 				case 2:
 					if(i!=n-1)
 					i++;
 					break;
 					case 3:
 						if(has==false && v[i]>0)
 						{
 						
 						v[i]-=1;
 						has=true;
 					    }
 						break;
 						case 4:
 							if(has==true && v[i]<h)
 							{
 						  v[i]+=1;
 						  has=false;
 				        	}
 						  break;		
 	}
 	
 }
 	for(i=0;i<n;i++)
 	 printf("%lld ",v[i]);
}

