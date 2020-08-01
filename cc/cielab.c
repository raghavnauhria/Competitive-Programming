#include<stdio.h>

int main(){

int a,b;

scanf("%d %d", &a, &b);

a=a-b;
if(a%10 == 9)	a--;
else		a++;

printf("%d", a);

return 0;
}
