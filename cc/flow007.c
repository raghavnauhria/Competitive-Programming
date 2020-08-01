#include<stdio.h>

int main(){

int t;
scanf("%d", &t);

int n, rev;

while(t--){
	scanf("%d", &n);
	rev=0;
	while(n){
		rev= rev*10 + n%10;
		n/=10;
		}
	printf("%d\n", rev);
}

return 0;
}
