#include<stdio.h>
#define get(a) scanf("%lld",&a)
#define ll long long
#define INF 99999999999999999999999
void printSolution(ll V,ll dist[V][V]);
 
void floydWarshell (ll V,ll graph[V][V]) 
{
  
    ll dist[V][V], i, j, k;
 
   
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];
 
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    printSolution(V,dist);
}
 
void printSolution(ll V,ll dist[V][V])
{
	ll i,j;
    ll mx=0;
    for ( i = 0; i < V; i++)
    {
        for ( j = 0; j < V; j++)
        {
            if(mx < dist[i][j] && dist[i][j]!=INF)
            {
            	mx=dist[i][j];
            }
        }
    }
    printf("%lld",mx);
}

int main()
{
	
	ll c,f,x,y,p,i,j;
	get(c);get(f);
    ll graph[c][c];
    
    for( i=0;i<c;i++)
    {
    	for( j=0;j<c;j++)
    	{
    		if(i==j)
    		graph[i][j]=0;
    		else
    		graph[i][j]=INF;
    		
    	}
    	
    }
    
	for( i=0;i<f;i++)
	{
		get(x);get(y);get(p);
		graph[x-1][y-1]=p;
		
	}
	
    floydWarshell(c,graph);
    return 0;
}
