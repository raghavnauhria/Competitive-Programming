#include<stdio.h>
#include<stdlib.h>

int main(){

int n;
scanf("%d", &n);

int i;

while(n!=0){

int* seq= (int*) malloc(n*sizeof(int));
int* inv= (int*) malloc(n*sizeof(int));

for(i=0; i<n; i++){
	scanf("%d", &seq[i]);
	inv[seq[i]-1] = i+1;
	}

for(i=0; i<n; i++)
	if(inv[i] != seq[i] )
		break;

if(i==n)	printf("ambiguous\n");
else		printf("not ambiguous\n");

scanf("%d", &n);
}

return 0;
}
