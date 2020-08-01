#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int n, m;
cin >> n >> m;

int count = n, min = n, x[m], i, j, cbegin = -1, minbeg = 0;

string a, b;
cin >> a >> b;

for(i=0; i<m; i++)
	x[i] = 0;
	
for(i=0; i<n; i++)
{
	for(j=0; j<m; j++)
	{
		if(b[j] == a[i])
			x[j] = i+1;
	}		
}

for(i=0; i<m; i++)
{
	count = n;
	
	if(x[i] > 0 && (m-1-i)>=(n-x[i]) && x[i] <= i+1)
	{
		cbegin = i;
		count--;
		for(j=i+1; j<= n-x[i]+i && j<m; j++)
		{
			if( x[j] > 0 && (x[j]-x[i])==(j-i) )
				count--;
		}
		
		if( min > count)
		{
			min = count;
			minbeg = cbegin;
		}
		
		i = cbegin;
	}
}

if(min == 0)
{
	cout << "0";
}
else	if(min == n)
	{
		cout << min << "\n";
		for(i=0; i<n; i++)
			cout << i+1 << " ";
	}
	else
	{
		cout << min << "\n";
		int y[n];
		for(i=0; i<n; i++)
			y[i] = 0;
		for(i= minbeg; i<=n-x[minbeg]+minbeg; i++)
		{
			//cout << (x[i]-x[minbeg]) << "\t" << (i-minbeg) << "\n";
			if((x[i]-x[minbeg])==(i-minbeg))
				y[ i-minbeg ] = 1;
		}
		
		for(i=0; i<n; i++)
			if( y[i] != 1)
				cout << i+1 << " ";
	}
	
return 0;
}
