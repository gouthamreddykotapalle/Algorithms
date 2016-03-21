using namespace std;
 
#include<bits/stdc++.h>
#include<vector>
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
 
int main()
{
	BOOST;
	int t, n, x, maxc,f, i;
	multiset<int> a;
	multiset<int>::iterator it;
	
	cin>>t;
	
	while(t--)
	{
		maxc = 0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			a.insert(x);
		}
			for(it = a.begin(); it != a.end(); it++)
		{
			if(a.count(*it) > maxc)
				maxc = a.count(*it);
		}
		
		cout<<n-maxc<<endl;
		a.clear();
		
	}
}
