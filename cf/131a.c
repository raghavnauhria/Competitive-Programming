#include<stdio.h>
#include<string.h>

int main()
{
char s[101];
scanf("%s", s);

int count = 0, i;

if(s[0] <= 90)
{
	count++;
}
else
	count--;
	
if(strlen(s) > 1)
{
	count = 0;
	for(i=1; i< strlen(s); i++)
	{
		if( s[i] <= 90)
		{
			count++;
		}
	}
	
	if( count >= strlen(s)-1 )
	{
		for(i=0; i<strlen(s); i++)
		{
			if( s[i]<=90 )
				printf("%c", s[i]+32);
			else
				printf("%c", s[i]-32);
		}
	}
	else
		puts(s);
}

else printf("%c", s[0] + 32*count);

return 0;
}

