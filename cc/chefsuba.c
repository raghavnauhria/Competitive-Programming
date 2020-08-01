#include<stdio.h>
#include<stdlib.h>

/*void maximal( int* a, int n, int k, int shift){

int i, max=0, sum=0;

shift = n-shift;

for(i=0; i<k; i++)
	sum+= a[(shift+i)%n];
	
for(i=0; i<=n-k; i++){
	if(max<sum)	max=sum;
	sum= sum+ a[(shift+k+i)%n] - a[(shift+i)%n];
	}
	
printf("%d\n", max);
	
}
*/

void calcsum(int* sumtable, int* a, int n, int k){

	int i,j;

	for(i=0; i<n; i++)
		for(j=0; j<k; j++)
			sumtable[i]+= a[(i+j)%n];

	}

void maximum( int* sumtable, int n, int k, int shift){

	int max=0, i;

	for(i=0; i<=n-k; i++)
		if(max < sumtable[(n-shift+i)%n] )
			max = sumtable[(n-shift+i)%n];
		
	printf("%d\n", max);

	}

int main(){

int n,k,p;
scanf("%d %d %d", &n, &k, &p);

if(k>n)	k=n;

int* a = (int*) malloc(n*sizeof(int));
int* sumtable = (int*) calloc(n,sizeof(int));


int i, shift=0;
char ques;

for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
calcsum(sumtable, a, n, k);	

scanf("\n%c", &ques);

while(p--){
	
	if(ques == '!')
		shift++;
	//else	maximal(a,n,k,shift);

	else maximum(sumtable, n, k, shift);

	if(p)	scanf(" %c", &ques);
}

return 0;
}
