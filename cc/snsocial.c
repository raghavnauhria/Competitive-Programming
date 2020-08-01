#include<stdio.h>
#include<stdlib.h>

int minimum( int a, int b)
{
if(a<=b)
	return a;
else return b;
}
int maximum( int a, int b)
{
if(a>=b)
	return a;
else	return b;
}

int main()
{
int t;
scanf("%d", &t);

int n, m;
int i, j, k, maxtime, max, min, num;

while(t--)
{
	scanf("%d %d", &n, &m);
	
	int a[n][m], dist[n][m], maxind[2][n*m];
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d", &a[i][j]);
	
	/*for(i=0; i<n*m; i++)
		maxind[0][i] = 0;
		
	for(i=0; i<n*m; i++)
		maxind[1][i] = 0;
	*/
		
	max = a[0][0];
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			if(max< a[i][j])
				max=a[i][j];
				//printf("%d\n",max);
				
	k=0;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
		{
			if(max == a[i][j])
			{
				maxind[0][k] = i;
				maxind[1][k] = j;
				k++;
			}
		}
	
	num=k;
	/*for(i=0; i<num; i++)	printf("%d ", maxind[0][i]);
	printf("\n");
	for(i=0; i<num; i++)	printf("%d ", maxind[1][i]);
	printf("\n");
	*/
	min = 500;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
		{
			
			for(k=0; k<num; k++)
				min = minimum(min, maximum( abs(maxind[0][k]-i), abs(maxind[1][k]-j)));
				//printf("%d", min);
			dist[i][j] = min;
			min = 500;
		}
	
	max = dist[0][0];
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			if(max< dist[i][j])
				max=dist[i][j];
/*for(i=0; i<n; i++)
		{for(j=0; j<m; j++)
		printf("%d ", dist[i][j]);
		printf("\n");}
*/
	printf("%d\n", max);
}
return 0;
}
