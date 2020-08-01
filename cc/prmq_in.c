#include<iostream>
#include<cmath>
#include<string.h>
#include<algorithm>

#define ROWS (int)1e6 +1
#define COL (int) 1e6 + 1
using namespace std;

int main()
{

int a[ROWS][COL], i, n, j, k;

memset(a, 0, sizeof(a));

for(i=2; i<1000001; i++)
{
	n = i;
	
	for(j=2; j*j <= n; j++)
	{	
		if( a[i][j] != -1)
		{
			if( n%j == 0 )
				for(k=2; k<=n; k++)
					a[i][j*k] = -1;
			
			while( n%j == 0 )
			{
				a[i][j] ++;
				n /= j;
			}
		}
	}
}

cin >> n;

int b[n];
for(i=0; i<n; i++)
	cin >> b[i];
sort(b, b+n);

int q;
cin >> q;

int l, r, x, y, sum;

while(q--)
{
	cin >> l >> r >> x >> y;
	sum=0;
	for(i=x; i<=y; i++)
		for(j=l; j<=r; j++)
			while( a[j][i] != -1)
				sum += a[j][i];
	
	cout << sum << endl;			
}

return 0;
}
