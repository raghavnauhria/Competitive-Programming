#include<stdio.h>

int main(){

int n;
scanf("%d", &n);
int count=0;
int view[3]={0};
while(n--){
	for(int i=0; i<3; i++)
		scanf("%d", &view[i]);
	if( (view[0]+view[1]+view[2]) > 1)
		count++;
}
printf("%d", count);

return 0;
}