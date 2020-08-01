#include<iostream>
using namespace std;

int main()
{
int t;
cin >> t;

int n, i;

while(t--)
{
	cin >> n;
	
	for(i=0; i<n; i++)
		cout << 500-i << " ";
	cout<<endl;
}

return 0;
}
