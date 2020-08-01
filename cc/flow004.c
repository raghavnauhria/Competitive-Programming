#include<stdio.h>


int main(){

int t;
scanf("%d", &t);

int n, sum=0;

while(t--){
	
	scanf("%d", &n);
	sum =n%10;
	while(n/10)	n/=10;
	sum+= n%10;
	printf("%d\n", sum);

}

return 0;
}
