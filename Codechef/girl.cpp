using namespace std;
 
#include<bits/stdc++.h>
 
int main()
{
	long long t, n, d, x, i, dist, steps, m, pos;
	vector<long long> fr, bk, min;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			fr.push_back(x);
		}
		for(i=0;i<n;i++)
		{
			cin>>x;
			bk.push_back(x);
		}
		cin>>d;
		for(i=0;i<n;i++)
		{
			dist=0; steps=0;
			while((dist+fr[i])<d)
			{
				dist+=fr[i]-bk[i];
				steps+=fr[i]+bk[i];
			}
			steps+=d-dist;
			min.push_back(steps);
		}

		m = min[0];
		pos = 0;
		for(i=0;i<n;i++)
		{
			if(min[i]<m)
			{
				m = min[i];
				pos = i;
			}
		}
		cout<<pos+1<<endl;
		fr.clear();bk.clear();min.clear();
	}
	return 0;
} 
