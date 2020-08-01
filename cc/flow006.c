#include<stdio.h>

int main(){

int t;
scanf("%d", &t);

int sum=0;
int n;

while(t--){

sum=0;
scanf("%d", &n);

while(n){
	sum+= n%10;
	n/=10;
	}

printf("%d\n", sum);

}

return 0;
}
