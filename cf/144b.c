#include<iostream>
#include<vector>

using namespace std;

int sq(int n)
{
	return n*n;
}

int main()
{
ios::sync_with_stdio(false);

int xa, ya, xb, yb;

cin >> xa >> ya >> xb >> yb;

int temp;

if( xa > xb )
{
	temp = xa;
	xa = xb;
	xb = temp;
}

if( ya > yb )
{
	temp = ya;
	ya = yb;
	yb = temp;
}
int n;
cin >> n;

int h[n][3], i, j, num=0, count=0;

for(i=0; i<n; i++)
	for(j=0; j<3; j++)
		cin >> h[i][j];

for(i=0; i<n; i++)
	h[i][2] *= h[i][2];
	
for(i=xa; i<=xb; i++)
{
	for(j=0; j<n; j++)
		if( sq(h[j][0]-i) + sq(h[j][1]-ya) <= h[j][2])
			break;
	if(j==n)
		num++;
}		

for(i=xa; i<=xb; i++)
{
	for(j=0; j<n; j++)
		if( sq(h[j][0]-i) + sq(h[j][1]-yb) <= h[j][2])
			break;
	if(j==n)
		num++;
}

if(ya == yb)
	num /= 2;

for(i=ya+1; i<yb; i++)
{
	for(j=0; j<n; j++)
		if( sq(h[j][0]-xa) + sq(h[j][1]-i) <= h[j][2])
			break;
	if(j==n)
		count++;
}	
	
for(i=ya+1; i<yb; i++)
{
	for(j=0; j<n; j++)
		if( sq(h[j][0]-xb) + sq(h[j][1]-i) <= h[j][2])
			break;
	if(j==n)
		count++;
}

if( xa == xb)
	count /=2;

cout << count+num;

return 0;
}
