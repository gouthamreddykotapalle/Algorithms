#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
#define get(a) scanf("%lld",&a)
#define ll long long
#define pb push_back
#include<string>
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)

int maxSum(vector<ll>,int);

int main()
{
	
	ll i,j,n,c,x,k,b,a,sum,s;
   get(n);
   vector<ll> v;
   
   for(i=0;i<n;i++)
   {
   	cin>>x;
   	v.pb(x);
   	
   }
   
   s=maxSum(v,2);
   cout<<s<<endl;
	
	
}

 int maxSum (vector<ll> input, int n) {
    int sums[n+1];  // new int[] fills the array with zeros
    int max = 0;

    for (int x=0;x<input.size();x++) {
        int newMax = max;
        // update sums[k] for k > 0 by adding x to the old sums[k-1]
        // (loop from top down to avoid overwriting sums[k-1] too soon)
        for (int k = n; k > 0; k--) {
            sums[k] = sums[k-1] + x;
            if (sums[k] > newMax) newMax = sums[k];
        }
        sums[0] = max;  // update sums[0] to best sum possible if x is excluded
        max = newMax;   // update maximum sum possible so far
    }
    return max;
}

