#include<stdio.h>

int main()
{
int n;
scanf("%d", &n);

int a[n], i, count = 1, countmax = 1;

for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
for(i=0; i<n-1; i++)
	if( a[i] <= a[i+1] )
	{
		count++;
		if(count>countmax)
			countmax=count;
	}
	else
		count = 1;

printf("%d", countmax);

return 0;
}
