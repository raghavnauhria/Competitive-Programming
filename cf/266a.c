#include<stdio.h>

int main()
{

int n;
scanf("%d", &n);

int count = 0, i;
char start, x;

scanf("\n%c", &start);

for( i = 1; i< n; i++)
{
	scanf("%c", &x);
	
	if(start == x)
	{
		count++;
	}
	else
		start = x;
}

printf("%d\n", count);

return 0;
}	
