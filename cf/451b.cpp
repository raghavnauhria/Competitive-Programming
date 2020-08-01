#include<iostream>

using namespace std;

void swap( int a[], int n, int l, int r)
{
	int temp;
	if(l>=r)
		return;
	else
	{
		temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		swap(a, n, l+1, r-1);
	}

}

int main()
{
ios::sync_with_stdio(false);

int n;
cin >> n;

int a[n], i;

for(i=0; i<n; i++)
	cin >> a[i];

int l, r;

for(i=0; i<n-1; i++)
	if( a[i] > a[i+1])
	{
		l=i;
		break;
	}
if( i == n-1)
{
	cout << "yes\n1 1";
	return 0;
}

for(i=l+1; i<n-1; i++)
	if(a[i] < a[i+1])
	{
		r=i;
		break;
	}

if( i == n-1 )
	r=n-1;
	
swap(a, n, l, r);

for(i=0; i<n-1; i++)
	if( a[i] > a[i+1] )
		break;
if(i != n-1)
	cout << "no";
else	cout << "yes\n" << l+1 << " " << r+1;

return 0;
}
