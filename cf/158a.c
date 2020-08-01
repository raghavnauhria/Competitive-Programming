#include<stdio.h>

int main()
{

int n, k;
scanf("%d %d", &n, &k);

int a[n], i;

for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
int cutoff = a[k-1];
int count = k;

if( cutoff > 0)
{
	while( a[count] == cutoff)
	{
		count++;
	}
}
else
{	do{ count--;}
	while( a[count] <= 0 && count >= 0);
	
	count++;
}
//if(count<0)		count=0;
printf("%d\n", count);

return 0;
}
