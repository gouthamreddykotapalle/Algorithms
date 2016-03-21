#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
/*#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;*/
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned long long a,b;
    unsigned  long long c;
    int n;
    cin>>a>>b>>n;
    
    for(int i=0;i<n-2;i++)
        {
        c= a+(b*b);
        a=b;
        b=c;
        
          cout<<c<<" ";
    }
  
    
    
    
    
    
    return 0;
}

