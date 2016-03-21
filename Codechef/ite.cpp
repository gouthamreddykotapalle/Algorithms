#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define  ite vector<int>::iterator 


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    cin>>t;
    while(t--)
        {
        
        int n,k,p;
        vector<int> v1,v2;
        cin>>n>>k;
        for(int i=0;i<n;i++)
            {
            cin>>p;
            v1.push_back(p);
        }
        for(int i=0;i<n;i++)
            {
            cin>>p;
            v2.push_back(p);
        }
        int i=0,j=0;
       for( ite it1 = v1.begin(); it1 != v1.end(); it1++ )
           {
           for( ite it2 = v2.begin(); it2 != v2.end(); it2++ )
               {
               if(*it1 + *it2 >= k)
                   {
                   v2.erase(v2.begin()+j);
                  // j--;
                   v1.erase(v1.begin()+i);
                   //i--;
               }
               j++;
           }
           i++;
       }
        if(v1.empty() && v2.empty())
            {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
           
       }
        
        
        return 0;
    }
    


