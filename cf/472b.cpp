#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int n, k;
cin >> n >> k;

int f[n], i, ans = 0;
for(i=0; i<n; i++)
	cin >> f[i];
	
sort(f, f+n);

for(i=0; n > k*i; i++)
	ans += 2*( f[n-k*i-1] - 1 );

cout << ans;

return 0;
}
