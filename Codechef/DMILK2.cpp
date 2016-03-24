#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
 
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;
 
int t, n, m, k, ans, calc;
 
int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);
 
 
cin>>t;
while(t--)
{
    ans = 0;
    cin>>n>>m>>k;
    for(int i = 0; i < n; i++)
    {
        int xs; cin>>xs;
        calc = xs/k;
        if(calc > m)
            xs -= (m*k);
        else
            xs -= (calc*k);
        ans += xs%MOD;
        ans %= MOD;
    }
    cout<<ans<<endl;
}
 
 
return 0;}
