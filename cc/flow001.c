#include<stdio.h>

int main(){

int t;
scanf("%d", &t);
int a,b;

while(t--){
	scanf("%d %d", &a, &b);
	printf("%d\n", a+b);
}

return 0;
}
