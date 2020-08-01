#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, c, x;
	cin >> t;

	while(t--)
	{
		cin >> n >> c;

		while(n--)
		{
			cin >> x;
			c -= x;
		}

		if(c>=0)
			cout << "Yes\n";
		else
			cout <<"No\n";
	}

	return 0;
}