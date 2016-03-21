using namespace std;
 
#include<bits/stdc++.h>
 
int main()
{
	int t, n, x, maxc, i;
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
