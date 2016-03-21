using namespace std;
 
#include<bits/stdc++.h>
#define ll long long
#define b 5000000
#define INPFILE freopen("input.in","r",stdin)
#define debug(x) cout << "[DEBUG] " << #x << " = " << x << endl
 
bool mark[5000005];
 
int main()
{
	ll t, n, a, k;
	ll root = sqrt(b);
//	cout<<root<<endl;
	for(int i=1;i<=root;i++)
	{
		for(int j=(i+1);j<=root;j++)
		{
			a = i*i + j*j;
			if(a > b)
			{
				continue;
			}
			else
			{
				mark[a] = true;
				k=2;
				while ( (k*a) <= b )
    			{
        			mark[ k*a ] = true; // minus 1 because index starts from 0.
        			++k;
    			}
    		}
		}
	}
	//INPFILE;
	scanf("%lld",&t);
	while(t--)
	{
		cin>>n;
		if(mark[n])
			printf("YES\n");
		else
			printf("NO\n");	
	}
	return 0;
} 
