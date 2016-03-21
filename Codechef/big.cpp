/**
BigInteger implementation
*/
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include<string.h>
using namespace std;

class BigInt{
   vector<int> digits;
public:
   BigInt(string num="0");
   BigInt operator+(BigInt a);
   friend std::ostream& operator<<(std::ostream& out,BigInt a);
};

struct Ascii2Int { int operator()(int c) {return c-'0';} };

BigInt::BigInt(string num){
   transform(num.rbegin(), num.rend(), back_inserter(digits),Ascii2Int());
}
BigInt BigInt::operator +(BigInt a){
   //BigInt temp;
   int num = 0;
   int carry = 0;
   for(unsigned int i = 0; i < a.digits.size(); i++)
   {
       num = digits[i] + a.digits[i] + carry;

	   if(num >= 10)
       {
           num = num - 10;
           carry = 1;
	   }
	   else{
		   carry = 0;
	   }
       this->digits[i] = num;
   }
   if (carry){
	   this->digits.push_back(1);
   }
   return *this;
}

std::ostream& operator <<(std::ostream& out, BigInt a)
{
    std::ostringstream os;

    for (unsigned i = a.digits.size(); i > 0; --i)
        os << a.digits[i-1];

    return out << os.str() ;
}

int main(){
	
	string a,b;
	cin>>a>>b;
    BigInt B1(a);
    BigInt B2(b);
    BigInt B3;


    B3 = B1 + B2;

    
    cout << "Result = " << B3;

    return 0;
}
