#include<stdio.h>
int main(){
 long int max,t,n,ar[10000],br[10000],i,j,p,m;
 scanf("%ld",&t);
 while(t--){
  max=0;m=0;
  scanf("%ld",&n);
  for(i=0;i<n;i++){
   scanf("%ld %ld",&ar[i],&br[i]);
   if(ar[i]>max){
    max=ar[i];
    p=i;
   }
  }
  br[p]=0;
  for(i=0;i<n;i++){
   if(m<br[i]){
    m=br[i];
   }
  }
  if(max>m){
   printf("%ld\n",p+1);
  }else{
   printf("-1\n");
  }
 }
 return 0;
}
