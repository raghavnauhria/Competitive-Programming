#include<stdio.h>
#include<stdlib.h>

int hcf( int a, int b){

if(a%b == 0)	return b;
else			return hcf(b, a%b);
}

int main(){

int t;
scanf("%d", &t);

int i,n,h;

while(t--){
	scanf("%d", &n);
	int* aloo = (int*) malloc( n*sizeof(int));
	
	for(i=0; i<n; i++)	scanf("%d", &aloo[i]);
	
	h = aloo[0];
	for(i=1; i<n; i++)	h = hcf(h,aloo[i]);
	
	for(i=0; i<n; i++)	printf("%d ", aloo[i]/h);
	
	printf("\n");
	}

return 0;
}
