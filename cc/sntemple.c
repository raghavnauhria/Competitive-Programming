#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

int t; 
scanf("%d",&t);
    
int n, i, k, countnegp=0, countnegp1=0;
long int p=0, p1=0;
            
while(t--)
{ 
	scanf("%d",&n);

	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	p=0, p1=0;
	countnegp = 0;
	countnegp1= 0;
 	
	if(n%2!=0)
	{
		for(k=0;k<=(n/2);k++)
			p=p+(a[k]-(k+1));
			
		for(k=n-1;k>(n/2);k--)
			p=p+(a[k]-(n-k));
		
		printf("%ld\n",p);
	}
	
	else
	{
		for(k=0;k<=(n/2);k++)
		{
			p=p+(a[k]-(k));
			if( a[k] < k)
				countnegp++;
		}
			
		for(k=n-1;k>(n/2);k--)
		{
			p=p+(a[k]-(n-k));
			if( a[k] < (n-k) )
				countnegp++;
		}
			
		for(k=0;k<(n/2);k++)
		{
			p1=p1+abs(a[k]-(k+1));
			if( a[k] < (k+1) )
				countnegp1++;
		}
		
		for(k=n-1;k>=(n/2);k--)
		{
			p1=p1+abs(a[k]-(n-k-1));
			if( a[k] < (n-k-1) )
				countnegp1++;
		}  

		if(countnegp > 0)
			printf("%ld\n", p1);
		if(countnegp1 > 0)
			printf("%ld\n", p);
		if( countnegp == 0 && countnegp1 == 0)
			if(p1>p)	printf("%ld\n",p);
			else		printf("%ld\n",p1);
	}
}	
return 0;
}
