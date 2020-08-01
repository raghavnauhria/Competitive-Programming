#include<stdio.h>
#include<string.h>
int main()
{
int t, n, k;

scanf("%d", &t);

int i, j, x, len, ans;
int a[2500][2500];

while(t--)
{
	scanf("%d %d", &n, &k);
	
	int ans=0;
	//memset(a, 0, sizeof(a[0][0]) *n*k);
	for(i=0; i<n; i++)
		for(j=0; j<k; j++)
			a[i][j] = 0;
			
	for(i=0; i<n; i++)
	{
		scanf("%d", &len);
		
		while(len--)
		{
			scanf(" %d", &x);
			a[i][x-1] = 1;
		}
	}
	
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
		{
			for(x=0; x<k; x++)
				if(a[i][x] == 0 && a[j][x] == 0)
					break;
				
			if(x == k)
				ans++;
		}
	
	printf("%d\n", ans);
}

return 0;
}
