#include<iostream>
#include<cmath>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{

int n;
cin >> n;

int b[n], i, j;
for(i=0; i<n; i++)
	cin >> b[i];

int q;
cin >> q;

int qu[q][4];
for(i=0; i<q; i++)
	for(j=0; j<4; j++)
		cin >> qu[i][j];
		
int lmin = b[qu[0][0]-1], rmax = b[qu[0][1]-1], xmin = qu[0][2], ymax = qu[0][3], sum;

for(i=1; i<q; i++)
{
	lmin= min( lmin, b[qu[i][0]-1]);
	rmax= max( rmax, b[qu[i][1]-1]);
	xmin= min( xmin, qu[i][2]);
	ymax= max( ymax, qu[0][3]);
}

int a[lmin - rmax +1][ymax-xmin +1], m, k;

memset(a, 0, sizeof(a));

for(i=2; i<(lmin - rmax +1); i++)
{
	m = i;
	
	for(j=2; j*j <= m && j <(ymax-xmin +1); j++)
	{	
		if( a[i][j] != -1)
		{
			if( m%j == 0 )
				for(k=2; k<=m; k++)
					a[i][j*k] = -1;
			
			while( m%j == 0 )
			{
				a[i][j] ++;
				m /= j;
			}
		}
	}
}

for(k=0; k<q; k++)
{
	sum=0;
	for(i=qu[k][2]; i<=qu[k][3]; i++)
		for(j=qu[k][0]; j<=qu[k][1]; j++)
			while( a[j][i] != -1)
				sum += a[j][i];
	
	cout << sum << endl;			
}
return 0;
}

