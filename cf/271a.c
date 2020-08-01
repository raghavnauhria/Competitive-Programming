#include<stdio.h>

int beauty( int y)
{
int i, j;
int dig[4];

for(i=0; i<4; i++)
{
	dig[i] = y%10;
	y /= 10;
}

for(i=0; i<4; i++)
	for(j=i+1; j<4; j++)
		if(dig[i] == dig[j])
		{
			return 0;
			break;
		}
return 1;
}

int main()
{
int y;
scanf("%d", &y);

y++;

while( !beauty(y) )
{
	y++;
}

printf("%d", y);

return 0;
}
