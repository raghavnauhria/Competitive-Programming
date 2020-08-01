#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
int n;
scanf("%d", &n);
int l;
char word[100];
while(n--){
	scanf("%s", word);
	l=strlen(word);
	if(l>10)	printf("%c%d%c\n", word[0], l-2, word[l-1]);
	else		puts(word);
}
return 0;
}
