#include<stdio.h>
#include<stdlib.h>

int main(){

int t;
scanf("%d", &t);

char a[4][10];
int goals[4];
int b,m,r,e, i;

while(t--){
	
	b=0;m=0;r=0;e=0;
	
	for(i=0; i<4; i++){
		scanf("%s", a[i]);
		scanf("%d", &goals[i]);
		}
	for(i=0; i<4; i++){
		switch(a[i][0]){
		case 'B': b=goals[i]; break;
		case 'M': m=goals[i]; break;
		case 'R': r=goals[i]; break;
		case 'E': e=goals[i]; break;	
		default: break;
		}
	}
	
	if( b > e && r < m)	printf("Barcelona\n");
	else				printf("RealMadrid\n");

}

return 0;
}
