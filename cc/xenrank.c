#include<iostream>
using namespace std;

int main()
{
int t;
cin >> t;

long long int ans, u, v;

while(t--)
{
	cin >> u >> v;
	ans = (u+v)*(u+v+1)/2 + (u+1);
	
	cout << ans << endl;
}

return 0;
}
