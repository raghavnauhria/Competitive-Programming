#include<stdio.h>

int main()
{
int i, val, moves=0;

for(i=1; i<= 25; i++)
{
	scanf("%d", &val);
	if(val)
	{
		moves += 2 - (i-1)%5;
		if(moves < 0)	moves *= (-1);
	
		if( i >= 16 )	moves += (i-1)/5 - 2;
		else			moves += 2 - (i-1)/5;
	}
}

printf("%d", moves);

return 0;
}
