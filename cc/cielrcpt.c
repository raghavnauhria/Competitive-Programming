#include<stdio.h>

int main(){

int t;
scanf("%d", &t);

int p, sum=0, pow;

while(t--){

	scanf("%d", &p);
	
	pow=2048;
	sum=0;
	
	while(p){
		sum+= p/pow;
		p%=pow;
		pow/=2;
		}
	
	printf("%d\n", sum);
	}

return 0;
}
