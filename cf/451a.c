#include<stdio.h>

int main()
{
int n, m;
scanf("%d %d", &n, &m);

if( n > m)
	n=m;

if( n%2 == 0)
	printf("Malvika");
else	printf("Akshat");

return 0;
}	
