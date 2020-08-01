#include<stdio.h>

int main()
{
int k, n, w;

scanf("%d %d %d", &k, &n, &w);

int cost = (w*(w+1))/2;
cost *= k;

if(n>cost)
	printf("0");
else
	printf("%d", cost-n);

return 0;
}
