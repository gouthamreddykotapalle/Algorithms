#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,d,t;
   char str[5],waste;
   scanf("%s",str);
   n=(str[0]-'0')*10 + str[1]-'0';
   for(int i=1; i<=str[3]-'0' ;++i)
      n*=10;
   scanf("%c",waste);//to take care of enter key in buffer
   while(n)
   {
      int ans=1;
      d=1;
      
      /*The standard DP solution 
      of josephus gives TLE*/
      // for(int i=2;i<=n;++i)
      // 	ans=(ans+d-1)%i+1 ;
      
      /*Multiplyin by 2 till d become
      greater than N*/
      while(d<=n)
      {
         d<<=1;
      }
      
      /*Since d>n now, we divide it by 2, 
      and find the difference between N and 
      d.
      We then multiply this difference by
      2 and add 1 to the answer.*/
      ans=((n-(d/2))*2) +1;
      
      printf("%d\n",ans);
      
      /*To take care of Input*/
      scanf("%s",str);
      n=(str[0]-'0')*10 + str[1]-'0';
      for(int i=1; i<=str[3]-'0' ;++i)
         n*=10;
      scanf("%c",waste);// to take care of enter in buffer	
   }
   return 0;
}
