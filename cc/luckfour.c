#include<stdio.h>

int main(){

int t;
scanf("%d", &t);

long int n;
int sum;

while(t--){
	scanf("%ld", &n);
	
	sum=0;
	
	while(n){
		if(n%10 == 4)	sum++;
		
		n/=10;
		}
	
	printf("%d\n", sum);
	
	}

return 0;
}
