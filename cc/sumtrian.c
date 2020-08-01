#include<stdio.h>

int max(int a, int b){

if(a>b)	return a;
else		return b;
}

int main(){

int t;
scanf("%d", &t);

int n, i, j, maxsum=0;

while(t--){

scanf("%d", &n);

int val[n][n];
int sumtable[n][n];

for(i=0; i<n; i++)
	for(j=0; j<n; j++){
		sumtable[i][j]=0;
		if(j<=i)	scanf("%d", &val[i][j]);
		else		val[i][j]=0;
		}

sumtable[0][0]=val[0][0];
for(i=0; i<n-1; i++)
	sumtable[i+1][0] = sumtable[i][0] + val[i+1][0];

for(i=0; i<n-1; i++)
	for(j=0; j<=i; j++)
		sumtable[i+1][j+1] = val[i+1][j+1] + max( sumtable[i][j], sumtable[i][j+1] ) ;
		
maxsum=0;
for(i=0; i<n; i++)
	maxsum = max( maxsum, sumtable[n-1][i]);

printf("%d\n", maxsum);

}
return 0;
}
