#include<stdio.h>
#include<string.h>

int main()
{
int n, k;
scanf("%d %d", &n, &k);

char a[n], temp;
scanf("%s", a);

int i, l=strlen(a);

while(k--)
{
	for( i=0; i<l-1; i++)
		if( a[i] < a[i+1] )
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			
			i++;
		}
}

puts(a);

return 0;
}
