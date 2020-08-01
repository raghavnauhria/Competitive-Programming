#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){

int n;
scanf("%d", &n);

int a[n], b[n], i, sum=0;

for(i=0; i<n; i++)
	scanf("%d", &a[i]);
for(i=0; i<n; i++)
	scanf("%d", &b[i]);
	
int pos[2] = { -1, -1 }, k=0;
char flag = 'c';

for(i=0; i<n; i++)
{
	if(a[i] != b[i])
	{
		pos[k] = i;
		k++;
	}
}

for(i=0; i<n; i++)
{
	if(i != pos[0] && i != pos[1])
	{
		if(a[i] == a[pos[0]])
			a[pos[0]] = 0;
		if(pos[1]>=0 && a[i] == a[pos[1]])
			a[pos[1]] = 0;
		if(b[i] == b[pos[0]])
			b[pos[0]] = 0;	
		if(pos[1]>=0 && b[i] == b[pos[1]])
			b[pos[1]] = 0;
	}
}
for(i=0; i<n; i++)
{	
	sum += a[i];
}	

if(k==2)
{
	for(i=0; i<n; i++)
	{
		if( i == pos[0] || i == pos[1] )
		{
			if( flag != 'a' && a[i] != 0)
			{
				printf("%d ", a[i]);
				flag = 'a';
			}
			else if( flag != 'b' && b[i] != 0)
			{
				printf("%d ", b[i]);
				flag = 'b';
			}	
			
		}
		else
			printf("%d ", a[i]);
	}
}

else
{
	//sum -= a[pos[0]];
	sum = n*(n+1)/2 - sum;
	
	for(i=0; i<n; i++)
	{
		if(i == pos[0])
			printf("%d ", sum);
		
		else
			printf("%d ", a[i]);
	}
}		


return 0;
}
