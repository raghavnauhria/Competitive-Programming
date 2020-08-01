#include<stdio.h>
#include<string.h>

int main(){

int t;
scanf("%d", &t);

int i;

while(t--){
	char* m;
	scanf("%ms", &m);
	
	if(strlen(m)==1)	{printf("yes\n");	break;}
	
	for(i=0; i<strlen(m)-1; i++)
		if(m[i] > m[i+1])
			break;
	
	if(i<strlen(m)-1)
		printf("no\n");
	else	printf("yes\n");

}

return 0;
}
