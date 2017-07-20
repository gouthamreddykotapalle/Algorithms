using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define getl(a) scanf("%lld",&a)
#define putl(a) printf("%lld\n",a)
#define putd(a) printf("%d\n",a)
#define getu(a) scanf("%llu",&a)
#define putu(a) printf("%llu\n",a)
#define ll long long
#define pb push_back
#define ppb pop_back
#include<map>
#include<stack>
#define vi vector<ll>::iterator
#define mi multiset<ll>::iterator
#define mapi map<ll,ll>::iterator
#define pairi pair<ll,ll>::iterator
#include<queue>
#define mp make_pair
#define len length()
#define sz size()
#define llu unsigned long long
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define ROF(i,a,b) for(ll i=b-1;i>=a;i--)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define F first
#define S second
#define F first
#define S second
#define all(a) a.begin(),a.end()


typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
ll min(ll,ll);//or macro
//pointer function
map<ll,ll> m;


 void bfs(char (&z)[300][300],bool (&visited)[300][300],int n,int i,int j)
 {
 	queue<pair<int,int> > q;
 	q.push(make_pair(i,j));
 	visited[i][j]=1;
 	while(!q.empty())
 	{
 		int a=q.front().F;int b=q.front().S;
 		q.pop();
 		if(a+1<n)
 		{ 
 		  if(visited[a+1][b]==0 && z[a+1][b]=='1')
 		  {
 		    q.push(make_pair(a+1,b));
			 visited[a+1][b]=1;	
	      }	
		}
		if(a-1>=0)
 		{ 
 		  if(visited[a-1][b]==0 && z[a-1][b]=='1')
 		  {
 		    q.push(make_pair(a-1,b));
			 visited[a-1][b]=1;		
	      }	
		}
		if(b+1<n)
 		{ 
 		  if(visited[a][b+1]==0 && z[a][b+1]=='1')
 		  {
 		    q.push(make_pair(a,b+1));	
 		    visited[a][b+1]=1;	
	      }	
		}
		if(b-1>=0)
 		{ 
 		  if(visited[a][b-1]==0 && z[a][b-1]=='1')
 		  {
 		    q.push(make_pair(a,b-1));	
 		    visited[a][b-1]=1;	
	      }	
		}
 		
 		
	 }
 	
}

int main()
{
	BOOST;
	int i,j,n,k,sum,p,tot,r,max,count=0;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
    cin>>n;
    char a;
    char z[300][300];
    bool visited[300][300];
    memset(visited,0,sizeof(visited));
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    	  	cin>>a;
    	  	z[i][j]=a;
		}
	}
	
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		if(z[i][j]=='1' && visited[i][j]==0)
   		{
   			//cout<<i<<" "<<j<<endl;
   			bfs(z,visited,n,i,j);
   			count=count+1;
		   }
   		
   	}
   }
   cout<<count<<endl;
}
    
    
    
    
    
    
    
       
  
