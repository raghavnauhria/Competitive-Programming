#include<stdio.h>

void heapsort( int f[], int m)
{
int c, root, temp, i;

for (i = 1; i < m; i++)
{
	c = i;
	do
	{
		root = (c - 1) / 2;             
		if (f[root] < f[c])   //to create MAX f fay
		{
			temp = f[root];
			f[root] = f[c];
			f[c] = temp;
		}

	}	while (c != 0);
}
 
for (i = m - 1; i >= 0; i--)
{
	temp = f[0];
	f[0] = f[i];    // swap max element with rightmost leaf element
	f[i] = temp;
	root = 0;
	do 
	{
		c = 2 * root + 1;    // left mde of root element
		if ( f[c] < f[c+1] && c < (i-1) )
			c++;
		
		if (f[root]<f[c] && c<i)    // again refange to max f fay
		{
			temp = f[root];
			f[root] = f[c];
			f[c] = temp;
		}
		
		root = c;
	} while (c < i);
}

}

void insertionSort(int f[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = f[i];
       j = i-1;
 
       while (j >= 0 && f[j] > key)
       {
           f[j+1] = f[j];
           j = j-1;
       }
       f[j+1] = key;
   }
}

int main()
{
int n, m;
scanf("%d %d", &n ,&m);

int f[m], i;

for(i=0; i<m; i++)
	scanf("%d", &f[i]);

insertionSort(f, m);

int min = f[m-1] - f[0];

for(i=0; i<=m-n; i++)
	if(min > (f[i+n-1]-f[i]) )
		min = f[i+n-1] - f[i];

printf("%d\n", min);

return 0;
}
