#include<stdio.h>

void insertionsort( long long int a[], int n){

int i, key, j;
for (i = 1; i < n; i++){
       
       key = a[i];
       j = i-1;
       
       while (j >= 0 && a[j] < key){
           a[j+1] = a[j];
           j--;
       }
       
       a[j+1] = key;
   }

}

void insertion( long long int a[], int n, int q){

int i=1, key;

while(q--){
	i=1;
	a[0]/=2;
	key=a[0];

	while(a[i] >= key && i < n-1){
		a[i-1] = a[i];
		i++;
	}
	a[i-1] = key;

}

}

int main(){

int n, m;
scanf("%d %d", &n, &m);

long long int a[n];
int i, q=0, scale=0;

for(i=0; i<n; i++)
	scanf("%lld", &a[i]);

insertionsort(a, n);

while(m--){
	
	scanf("%d", &q);
	q--;
	q= q-scale;
	scale= q + scale;
	
	insertion(a, n, q);
	
	printf("%lld\n", a[0]);
	//for(i=0; i<n; i++)	printf("%lld", a[i]);	printf("\n");
}


return 0;
}
