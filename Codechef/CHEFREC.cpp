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
	ll n,i,m,a,t,k,j;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	get(t);
	while(t--)
	{
	get(n);get(m);
	vector<vector<ll> > v;
	for(i=0;i<n;i++)
	{
		vector<ll> r;
	for(j=0;j<m;j++){
		get(a);
		r.pb(a);	
	}
	v.pb(r);
    }
    
      ll x = 0;
    ll y = 0;        
    ll sub_x;
    ll sub_y;

    while (true) {

        sub_x = x;
        sub_y = y;

        while (sub_x >= 0 && sub_y < n) {

            printf("%d ",v[sub_y][sub_x]);
            sub_x--;
            sub_y++;

        }

        if (x < m- 1) {

            x++;

        } else if (y < n - 1) {

            y++;

        } else {

            break;

        }

    }
    printf("\n");

      
		
	}
}

