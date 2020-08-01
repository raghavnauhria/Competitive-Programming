#include<stdio.h>
#include<string.h>

int main()
{

int t;
scanf("%d", &t);

char s[101];
int countm=0, counts=0, i;

while(t--)
{
	scanf("%s", s);
	
	if(strlen(s) == 1)
	{
		if(s[0] == 'm')
		{
			printf("mongooses\n");
			continue;
		}
		else
		{
			printf("snakes\n");
			continue;
		}
	}
	
	if(s[0] == 'm')
		if(s[1] == 's')
		{
			s[1] = '0';
			i=2;
		}
		else	i=1;
	else		i=1;
	
	
	for(; i<strlen(s); i++)
	{
		if( s[i] == 'm')
		{
			if(s[i-1] == 's')
			{
				s[i-1] = '0';
			}
			else	if( i<strlen(s)-1 && s[i+1]=='s')
				{
					s[i+1] = '0';
					i++;
				}
		}
	}
	countm = 0;
	counts = 0;

	for(i=0; i<strlen(s); i++)
	{
		if( s[i] == 'm')	countm++;
		if( s[i] == 's')	counts++;
	}
	
	if( countm > counts)
		printf("mongooses\n");
	else	if( counts > countm)
			printf("snakes\n");
		else	printf("tie\n");
		
}

return 0;
}
