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
#define seti set<ll>::iterator
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
double calc(double);
//pointer function
//Binary tree?
//double v[1000000000+5];
int main()
{
	 BOOST;
	 //v={0};
	  ll j,k,t,n,p,b,count,a,s;//hes going to input it ONLY in the way he has shown where even the space and enter keys are crutial
	  double i;
	  cin>>t;
	  while(t--)
	  {
	  	cin>>n;
	  	cout<<fixed<<setprecision(11)<<calc(n)<<endl;
	 }
}

double calc( double n)
{
        double sum=(double)2/(double)3;
	  	//v[0]=sum;
	  	for(double i=2;i<=n;i++)
	  	{
	  		sum+=(((i+1)/(i+2))-((i)/(i+1)))/(i);
	  		//v[i-1]=sum;
	  	}	
	  	return sum;
}


