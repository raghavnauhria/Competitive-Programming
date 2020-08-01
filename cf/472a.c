#include<stdio.h>

int main()
{
int n;
scanf("%d", &n);

if(n%2 == 0)
	printf("%d 4", n-4);
else	printf("%d 9", n-9);

return 0;
}
