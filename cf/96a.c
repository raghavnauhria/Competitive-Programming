#include<stdio.h>
#include<string.h>

int main()
{

char pos[101];
scanf("%s", pos);

int count = 1;
int i, l=strlen(pos);

for(i=0; i < l-1; i++)
{
	if( pos[i] == pos[i+1] )
		count++;
	else count = 1;
	
	if(count == 7) break;
}	

if( count == 7)
	printf("YES");
else	printf("NO");

return 0;
}
