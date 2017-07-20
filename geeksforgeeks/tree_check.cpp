using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define getl(a) scanf("%lld",&a)
#define putl(a) printf("%lld\n",a)
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

struct node
{
	node* left;
	node* right;
	int  val;
};

int main()
{
	struct node *head=  new node();
	int n,i;
	struct node *temp;
	getl(n);
	head->val=n;
	for(i=0;i<2;i++)
	{
		getl(n);
		if(n>head->val)
		{
			temp = new node();
			head->right=temp;
			temp->val=n;
		}
		else
		{
			temp= new node();
			head->left=temp;
			temp->val=n;
			
		}
	}
	temp=head;
	cout<<head->val<<head->left->val<<head->right->val<<endl;
	
}

