#include<stdio.h>

int main()
{
int n;
scanf("%d", &n);

int p, q, count = 0;

while(n--)
{
	scanf("%d %d", &p, &q);
	if( (q-p)>=2)
		count++;
}
printf("%d", count);

return 0;
}
