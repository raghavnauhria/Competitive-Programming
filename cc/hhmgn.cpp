#include<iostream>
#include<algorithm>

using namespace std;


int main()
{

ios::sync_with_stdio(false);

int t;
cin >> t;

int n, s, i;

while(t--)
{
	cin >> n >> s;
	
	int a[n];
	for(i=0; i<n; i++)
		cin >> a[i];
		
	sort(a, a+n);
	
	for(i=0; i<n; i++)
	{
		s -= a[i];
		if( s == (n-1-i)*a[i] )
		{
			cout << a[i] << "\n";
			break;
		}
	}
	if( i==n)
		cout << "-1\n" ;
}
return 0;
}
