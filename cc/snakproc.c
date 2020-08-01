#include<stdio.h>
#include<stdlib.h>

int main(){

int t;
scanf("%d", &t);

int l,k=0,i, flag;

while(t--){

	scanf("%d", &l);
	char a[l];
	
	scanf("%s", a);
	k=0;
	flag=0;
	for(i=0; i<l; i++){
		if(a[i] == '.')
			continue;
		if(a[i] == 'H')
			if(k == 0)	k++;
			else {flag=1;break;}
		
		else	if(k == 1)	k--;
			else {flag=1;break;}
	}
	
	if(flag == 1 || k != 0)	printf("Invalid\n");
	else				printf("Valid\n");
	
}

return 0;
}
