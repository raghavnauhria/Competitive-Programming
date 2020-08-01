#include<stdio.h>

int main(){

int t;
scanf("%d", &t);

int n,i,j,temp;

int arr[200];

while(t--){
	arr[0]=1;

	j=0;//for index of array arr

	scanf("%d", &n);

	for(; n>=2; n--){

		temp=0;

		for(i=0; i<=j; i++){

			temp=(arr[i]*n)+temp;
			arr[i]=temp%10;
			temp=temp/10;
			}

		while(temp>0){
			
			arr[++j]=temp%10;
			temp=temp/10;
			}

		}

	for(i=j; i>=0; i--)	printf("%d",arr[i]);
	
	printf("\n");
}

return 0;

}
