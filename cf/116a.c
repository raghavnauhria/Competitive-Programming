#include<stdio.h>

int main()
{
int n;
scanf("%d", &n);

int a, b;
int min = 0, pass = 0;

while(n--)
{
	scanf("%d %d", &a, &b);
	
	pass += (b-a);
	if( min < pass )
		min = pass;
}

printf("%d", min);

return 0;
}
