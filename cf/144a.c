#include<stdio.h>

int main()
{
int n;
scanf("%d", &n);

int a[n], i;
for(i=0; i<n; i++)
	scanf("%d", &a[i]);

int max = a[0], maxindex = 0, min = a[n-1], minindex = n-1;

for(i=1; i<n; i++)
	if(max<a[i])
	{
		max=a[i];
		maxindex = i;
	}
for(i=n-2; i>=0; i--)
	if(min > a[i])
	{
		min = a[i];
		minindex = i;
	}

if( max > min)
{
	if(maxindex<minindex)
		printf("%d", maxindex+n-1-minindex);
	else	printf("%d", maxindex+n-1-minindex-1);
}
else		printf("0");

return 0;
}
