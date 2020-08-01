#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){

int n, k, a[200], b[200], i, nullpos;

scanf("%d %d", &n, &k);

for(i=0; i<n; i++)
{
	scanf("%d", &a[i]);
	if(a[i] == 0)
		nullpos = i;
}
	
for(i=0; i<k; i++)
	scanf("%d", &b[i]);
	
if( k != 1)
{
	printf("Yes\n");
	return 0;
}

if(nullpos > 0 && nullpos < n-1)
{	
	for(i=0; i<k; i++)
	{
		if( a[nullpos-1] > b[i] && a[nullpos+1] < b[i] )
			break;
	}

	if( i < k )
	{
		printf("Yes\n");
		return 0;
	}
	else
		a[nullpos] = b[0];
}

else	if(nullpos == 0)
	{
		for(i=0; i<k; i++)
		{
			if(a[1] < b[i])
				break;
		}
	
		if( i < k )
		{
			printf("Yes\n");
			return 0;
		}
		else
			a[nullpos] = b[0];

	}
	
	else
	{
		for(i=0; i<k; i++)
		{
			if(a[n-2] > b[i])
				break;
		}
	
		if( i < k )
		{
			printf("Yes\n");
			return 0;
		}
		else
			a[nullpos] = b[0];
	}
	
	
for(i=0; i<n-1; i++)
{
	if(a[i] > a[i+1])
		break;
}

if( i < k )
	printf("Yes\n");
else
	printf("No\n");
		
return 0;
}
