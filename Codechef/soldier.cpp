#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define ll long long
#include<algorithm>
#define pb push_back

 int main()
 {
 	ll t,n,m;
 	char a;
 	cin>>t;
 	while(t--)
 	{
 		cin>>n>>m;//n soldiers m rounds
 		ll a[n],max[n],b[m];
 		for(ll i=0;i<m;i++)
 		{
 			cin>>b[i];
 		}
 		
 		for(ll i=0;i<n;i++)
 		{
 			a[i]=i;
 			max[i]=0;
 		}
 		ll p;
 		
 		for(ll i=0;i<m;i++)
 		{
 			p=b[i];
 			a[p]=0;//no change happens
 			
 			for(ll j=p-1;j>=0;j--)
 			{
 			   a[j]= -j+p;
				if(max[j]<a[j])
				max[j]=a[j];	
 			}
 			for(ll k=p+1;k<n;k++)
 			{
 			    a[k]= k-p;//1 2	
 			    if(max[k]<a[k])
				max[k]=a[k];	
 			}
 			
 		}
 		
 		for(ll i=0;i<n;i++)
 		cout<<max[i]<<" ";
 		cout<<"\n";
 		
 		
 		
 		
 	}
 }
