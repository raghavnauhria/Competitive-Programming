#include<stdio.h>

int main()
{
int t;
scanf("%d", &t);

int n, m;

int i, flag, input = 0;

while(t--)
{
	scanf("%d %d", &n, &m);
	
	int people[n];
	
	for(i=0; i<n; i++)
		people[i] = 0;
	
	for(i=1; i<= 2*m; i++)
	{
		scanf("%d", &input);
		people[input-1] ++;
	}
	
	flag = 0;
	
	if( n%2 == 0 )
	{
		for(i=0; i<n; i++)
			if( people[i] > 1)
			{
				printf("no\n");
				flag = 1;
				break;
			}
		if(flag == 0)
			printf("yes\n");
	}
	else	printf("no\n");
}

return 0;
}
