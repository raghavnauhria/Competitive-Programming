#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char s[101];
gets(s);

int count[4]={0},i,j=0, val;

for(i=0; i<strlen(s); i+=2){
	val=atoi(s+i);
	count[val]++;
	}

for(i=1; i<4; i++)
	while(count[i]--){
		s[j]= i + '0';
		j+=2;
	}

puts(s);

return 0;
}
