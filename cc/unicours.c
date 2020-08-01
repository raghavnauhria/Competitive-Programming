#include<stdio.h>
#include<stdlib.h>

int main(){

int t;
scanf("%d", &t);

int n, max,i;

while(t--){
	scanf("%d", &n);
	
	int* a= (int*) malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	max = 0;
	
	for(i=n-1; i>=0; i--){
		if(max < a[i] )
			max=a[i];
		if(max>=i)
			break;
	}
	
	printf("%d\n", n-max);
	
	free(a);
}

return 0;
}
