#include<stdio.h>


int main(){

int s;
scanf("%d", &s);

int n, temp, flag=0, i;

while(s--){

	scanf("%d", &n);
	
	if(n%2 == 0){
		while(n--)	scanf("%d", &temp);
		printf("no\n");
		continue;
		}
		
	int h[n];
	
	flag = 0;
	
	for(i=0; i<n; i++)	scanf("%d", &h[i]);
	for(i=0; i<=n/2; i++){
		if(h[i] != i+1)     {	flag=1; break;}
		if(h[n-1-i] != i+1) {	flag=1; break;}
		}
	
	if(flag == 1)	printf("no\n");
	else			printf("yes\n");
}

return 0;
}
