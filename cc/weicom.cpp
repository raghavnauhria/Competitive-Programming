#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

int n, val, max, min;
int i, j;

while(t--)
{
	cin >> n >> val;

	max = (n*(n-1)*(2*n-1))/6;
	min = max;

	for(i=1; i<= n/2; i++)
		min += 4*i - 2*n;

	if(val > max || val < min)
	{
		cout << "-1\n";
		continue;
	}

	int a[n][n];

	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			if(j>i)
				a[i][j] = 1;
			else
				a[i][j] = 0;

	i=1;
	while(max > val && min < max && i<=n/2)
	{
		a[0][n-i] = 0;
		a[n-i][0] = 1;

		max += 4*i - 2*n;
		i++;
	}

	if(max == val || min == val)
	{
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
				cout << a[i][j];
			cout << "\n";
		}
	}
	else
		cout << "-1\n";
}
return 0;
}