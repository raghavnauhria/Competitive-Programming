#include<iostream>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

long long int a, b, m, ans;

while(t--)
{
	cin >> a >> b >> m;
	
	ans = b/m - (a-1)/m;
	cout << ans << "\n";
	
}

return 0;
}
