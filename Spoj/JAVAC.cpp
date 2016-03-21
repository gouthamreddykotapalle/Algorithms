using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define get(a) scanf("%lld",&a)
#define put(a) printf("%lld",a)
#define ll long long
#define pb push_back
#define ppb pop_back
#include<map>
#include<stack>
#define vi vector<ll>::iterator
#define mi multiset<ll>::iterator
#define mapi map<ll,ll>::iterator
#include<queue>
#define len length()
#define sz size()
#define llu unsigned long long
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define ROF(i,a,b) for(ll i=b-1;i>=a;i--)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
ll max(ll,ll);
ll min(ll,ll);//or macro
//pointer function
int main()
{
	ll n,i,s,t,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	char a[100];
	//get(t);
	while(fgets(a, 255, stdin))
	{
		 a[100]={0};
		char flag='j';
		    n=-1;
			for(i=0;a[i]!='\0';i++)//stops exec with the null cahracter
			{
				if(a[i]=='_')
				flag='c';
				n++;
				
	    	}
	    	if(flag=='c')
	    	{
	    		if(a[0]=='_' || a[n-1]=='_')
	    		flag='e';
			    for(i=0;a[i]!='\0';i++)
			    {
			    	if(a[i]>='A' && a[i]<='Z')
			    	flag='e';		    	
			    	
			    }

			    if(flag=='c')
			    {
			    	//convert
			    	for(i=0;a[i]!='\0';i++)
			    	{
			    		if(a[i]=='_')
			    		{
			    			if(a[i+1]=='_')
			    			{
			    				flag='e';
			    				break;
			    			}
			    			a[i+1]-=32;
			    			for(j=i;j<n;j++)
			    			{
			    				a[j]=a[j+1];
			    			}
			    			n--;
			    		}
			    		
			    	}
			    	a[n]='\0';
			    	if(flag!='e')
			    	printf("%s \n",a);
			    }
		    }
		    else
		    {
		    
			 if(a[0]>='A' && a[0]<='Z')
		    	flag='e';
		    	if(flag=='j')
		    	{
		    		//convert
		    	for(i=0;a[i]!='\0';i++)
			    {
			    	if(a[i]>='A' && a[i]<='Z')
			    	{
			    		a[i]+=32;
			    		for(j=n+1;j>i;j--)
			    		{
			    			a[j]=a[j-1];
			    		}
			    		n++;
			    		a[i]='_';
			    	}
		    		
		    	}
		    	a[n]='\0';
			    	printf("%s\n",a);
		    }
		    
		
	}
	
     if(flag=='e')
      cout<<"Error!\n";
}
}

