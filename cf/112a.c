#include<stdio.h>
#include<string.h>

int main()
{
char a[101];
char b[101];
scanf("%s\n%s", a, b);

int flag=0, i;

for( i=0; i< strlen(a); i++)
{
	if( a[i] >= 65 && a[i] <= 90 )
		a[i] += 32;
	if( b[i] >= 65 && b[i] <= 90 )
		b[i] += 32;
		
	if( a[i] > b [i] )
	{
		flag = 1;
		break;
	}
	if( a[i] < b [i] )
	{
		flag = -1;
		break;
	}
}
printf("%d", flag);

return 0;
}
