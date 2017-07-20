//dfs
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int adj[10][10],i,j,k,n,stk[10],top,v,visit[10],visited[10];
 
int main()
{
int m;
cout <<"enterno of vertices";
cin >> n;
cout <<"ente no of edges";
cin >> m;
cout <<"\nEDGES \n";
for(k=1;k<=m;k++)
{
cin >>i>>j;
adj[i][j]=1;
}
 
cout <<"enter initial vertex";
cin >>v;
cout <<"ORDER OF VISITED VERTICES";
cout << v <<" ";
visited[v]=1;
k=1;
while(k<n)
{
for(j=n;j>=1;j--)
if(adj[v][j]!=0 && visited[j]==0 && visit[j]==0 /*i.e not at all in stack*/)
{
visit[j]=1;
stk[top]=j;
top++;
}
v=stk[--top];
cout<<v << " ";
k++;
visit[v]=0;//check if already present in stack(we don't want any duplicates in the stack. So,if in stack , this value is a one. If not , then it's a zero)
visited[v]=1;//normal tracking of visited nodes
}
}
