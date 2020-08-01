#include<stdio.h>

int main()
{
int n;
scanf("%d", &n);

char st[10];
int val = 0;

while(n--)
{
	scanf("%s", st);
	scanf("\n");
	
	if( st[1] == '+' )	val++;
	else				val--;
}

printf("%d\n", val);

return 0;
}
