#include<stdio.h>
#include<stdlib.h>
int n, m;

int maximum( int a, int b)
{
if(a>=b)
	return a;
else	return b;
}

int max( int a[2][n][m], int k, int i, int j)
{
int val=0;
int x, y;

for(x=i-1; x<i+2; x++)
{
	if(x >=0 && x<n)
	{
		for(y=j-1; y<j+2; y++)
			if(y>=0 && y<m)
				val = maximum( val, a[k][x][y]);
	}
}
return val;
}

int main()
{
int t;
scanf("%d", &t);

int i, j, k, time, flag = 0;

while(t--)
{
	scanf("%d %d", &n, &m);
	
	int a[2][n][m];
		
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d", &a[0][i][j]);
	
	k = 1;
	time = 0;
	i=0; j=0;
	flag=0;
	
	while( flag != n*m)//(i!=n) || (j!=m) )
	{
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				a[k%2][i][j] = max(a, (k+1)%2, i, j);
		
		time++;
		/*for(i=0; i<n; i++)
		{	for(j=0; j<m; j++)
				printf("%d ", a[k%2][i][j]);
			printf("\t");
			for(j=0; j<m; j++)
				printf("%d ", a[(k+1)%2][i][j]);
			printf("\n");}
		printf("\n");*/
		flag=0;	
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				if( a[k%2][i][j] == a[(k+1)%2][i][j])
				{
					flag++;
				}
		k++;
	}
	printf("%d\n", time-1);
}
return 0;
}
	
