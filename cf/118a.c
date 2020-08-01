#include<stdio.h>
#include<string.h>

int main()
{

char s[100];
scanf("%s", s);

int i, l=strlen(s);

for( i=0; i<l; i++)
{
	if( s[i] >= 65 && s[i] <= 90 )
		s[i] += 32;
	
	if( s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'y' && s[i] != 'u')
		printf(".%c", s[i]);
}

return 0;
}
