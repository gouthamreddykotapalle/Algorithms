#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define get(a) scanf("%lf",&a)
#define doub double
#define pb push_back
#include<string>
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
	BOOST;
    doub n,p,t,i,k;
    get(t);
    	while(t--)
    	{
       		get(n);
    		k=n;
    		for(i=0;i<5;i++)
    		{
    			get(p);
    			n=n+((p/100)*n);		
    		}
    		n=((n-k)/k)*100;
    		if(n<0)
    		printf("%lf\n",n);
    		else if(n>0)
    		printf("+%lf\n",n);
    		else
    		printf("0\n");
    		
    	}
    	
	}
    
  

