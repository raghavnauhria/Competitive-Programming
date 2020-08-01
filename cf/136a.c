#include<stdio.h>

int main()
{

int n;
scanf("%d", &n);

int a[n], input, i;

for(i=0; i<n; i++)
{
	scanf("%d", &input);
	a[input-1] = i+1;
}

for(i=0; i<n; i++)
	printf("%d ", a[i]);
	
return 0;
}
