#include <bits/stdc++.h>
using namespace std;

#define cini(a) int a; cin >> a;
#define cinii(a, b) int a, b; cin >> a >> b;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fastio; //Remove for interactive problems	

	cini(t);
	while(t--)
	{
		cinii(a, b);
		a %= 10;

		if(b == 0)
		{
			cout << 1 << endl;
			continue;
		}

		int ans=1;
		b = b%4;
		if(b==0) b = 4;
		while(b--)
			ans *= a;
		cout << ans%10 << endl;
	}
	return 0;
}