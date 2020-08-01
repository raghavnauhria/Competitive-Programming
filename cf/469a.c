#include<stdio.h>

int main()
{
int n;
scanf("%d", &n);

int a[n], i;
for(i=0; i<n; i++)
	a[i]=0;
	
int input, person = 2, p;

while(person--)
{
	scanf("%d", &p);
	while(p--)
	{
		scanf("%d", &input);
		a[input-1] ++;
	}
}

for(i=0; i<n; i++)
	if(a[i] == 0)
	{
		printf("Oh, my keyboard!");
		break;
	}
if(i==n)
	printf("I become the guy.");
	
return 0;
}
