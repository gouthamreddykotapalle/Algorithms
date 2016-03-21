#include <bits/stdc++.h>
#define ll long
#define get(a) scanf("%ld", &a);
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
 
int main() {
//	INPFILE;
BOOST;
	ll w1,w2,n1,n2,w,x,y;
	ll t; get(t);
	while(t--) {
	
	get(w1);get(w2);get(n1);get(n2);
		
		w=w1+w2;
		
		while((w1!=0 && w1!=1 )&& n2>0)
		
		{
			w1=w1-2;
			n2--;
		}
		
		while((w2!=0 && w2!=1 )&& n2>0)
		
		{
			w2=w2-2;
			n2--;
		}
		
		x=min(w1,n1);
		w1=w1-x;
		n1=n1-x;
		
		y=min(w2,n1);
		w2=w2-y;
		n1=n1-y;
		
		
		cout<<w-w1-w2;
	}
}
