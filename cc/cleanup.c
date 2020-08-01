#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

int n, m;
int i, input;

while(t--)
{
	cin >> n >> m;
	int a[n];
	for(i=0; i<n; i++)
		a[i] = i+1;

	for(i=0; i<m; i++)
	{
		cin >> input;
		a[input-1] = n+1;
	}
	
	sort(a, a+n);

	for(i=0; i<n-m; i+=2)
		cout << a[i] << " ";
	cout << "\n";

	for(i=1; i<n-m; i+=2)
		cout << a[i] << " ";
	cout << "\n";
}

return 0;
}
