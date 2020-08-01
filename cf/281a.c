#include<stdio.h>
#include<string.h>

int main()
{
char s[1000];
scanf("%s", s);

if( s[0] >= 97)
	printf("%c", s[0]-32);
else
	printf("%c", s[0]);

for(int i=1; i< strlen(s); i++)	printf("%c", s[i]);


return 0;
}
