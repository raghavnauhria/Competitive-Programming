#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	cout << t;

	string n, a, b;

	for(int j=1; j<=t; ++j)
	{
		cin >> n;
		a = n;
		b = n;

		int i=0;
		while(i<n.length())
		{
			if(n[i] == '4')
			{
				a[i] = '2';
				b[i] = '2';
			}
			else
				b[i] = '0';

			++i;
		}

		i=0;
		while(i<b.length() && b[i] == '0')
		{
			++i;
		}
		b.erase(0, i);

		cout << "Case #" << j << ": " << a << " " << b << "\n";
	}

	return 0;
}