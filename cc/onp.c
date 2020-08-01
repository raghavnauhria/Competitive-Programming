#include<stdio.h>
#include<ctype.h>

int main(){

int t;
scanf("%d", &t);

char rpn[400], exp[400], c;
int indexrpn, indexexp;
t++;
while(t--){

	indexrpn = 0;
	indexexp = -1;
	
	while ( (c = getchar()) != '\n'){
		
		if (c == ')'){
			
			while (exp[indexexp] != '(')
				rpn[indexrpn++] = exp[indexexp--];
			
			indexexp--;
			}
			
		else if(isalpha(c))
				rpn[indexrpn++] = c;
			else
				exp[++indexexp] = c;
		}
	
	rpn[indexrpn] = '\0';
	
	printf("%s\n", rpn);
}

return 0;
}
