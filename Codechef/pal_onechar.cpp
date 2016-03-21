#include<iostream>
#include<string>
#define ll long long

using namespace std;

bool palindromeExists(string s)
{
  int i = 0;
  int j = s.length()-1;
  while(i < j)
  {
      if(s[i] != s[j]) //first mismatch
          break;
      i++;
      j--;
  }

  int tempj = j-1; //remove s[j]
  int tempi = i;
  while(tempi < tempj)
  {
      if(s[tempi] != s[tempj])
          break;

      tempi++;
      tempj--;

  }

  if(tempi >= tempj) //palindrome found?
      return true;

  tempi = i+1; //remove s[i]
  tempj = j;
  while(tempi < tempj)
  {
      if(s[tempi] != s[tempj])
          return false;
      tempi++;
      tempj--;
  }
  return true;
}

int main()
{
  ll t;
  string s;
  cin>>t;
  while(t--)
  {
  	cin>>s;
  if(palindromeExists(s))
      cout << "YES" << endl;
  else
      cout << "NO" << endl;
  //return 0;
}
}
