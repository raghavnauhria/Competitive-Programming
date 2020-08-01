#include<iostream>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int n, d, l;

cin >> n >> d >> l;

if ( d > ((n+1)/2)*l-(n/2) || d < ((n+1)/2)-(n/2)*l )
{
	cout << "-1";
	return 0;
}

int a[n], i;

for(i=0; i<n; i+=2)
	a[i] = 1;
	
for(i=1; i<n; i+=2)
	a[i] = l;
	
d -= (((n+1)/2)-(n/2)*l);

for(i=0; i<n && d>0; i+=2)
	if(d >= l-1)
	{
		a[i] = l;
		d -= (l-1);
	}
	else
	{
		a[i] += d;
		d = 0;
	}

for(i=1; i<n && d>0; i+=2)
	if(d >= l-1)
	{
		a[i] = 1;
		d -= (l-1);
	}
	else
	{
		a[i] -= d;
		d = 0;
	}
for(i=0; i<n; i++)
	cout << a[i] << " ";
	
return 0;
}
