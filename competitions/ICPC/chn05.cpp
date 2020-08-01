#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	int n, m;

	while(t--)
	{
		cin >> n >> m;
		if(n == 1)
			cout << "0\n";
		else if( n == 2)
		{
			cout << m << "\n";
		}
		else
			cout << 2*m + n-3 << "\n";
	}

	return 0;
}