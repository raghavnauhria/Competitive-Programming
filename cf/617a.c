#include<stdio.h>

int main(){

int sum = 0, x;

scanf("%d", &x);

sum += x/5;

if(x%5 != 0 )
	sum++;
	
printf("%d\n", sum);

return 0;
}
