#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int n, k;
cin >> n >> k;

int a[n], b[k], i, nullpos = 0;

for(i=0; i<n; i++)
{
	cin >> a[i];
	if(a[i] == 0)
		nullpos = i;
}
for(i=0; i<k; i++)
	cin >> b[i];

if(k != 1)
{
	cout << "Yes" ;
	return 0;
}

int minval = b[0];
for(i=1; i<k-2; i++)
	if( minval > b[i] )
		minval = b[i];
		
a[nullpos] = minval;

for(i=0; i<n-1; i++)
{
	if(a[i] >= a[i+1])
		break;
}

if( i == n-1)
	cout << "No";
else	cout << "Yes";

return 0;
}
