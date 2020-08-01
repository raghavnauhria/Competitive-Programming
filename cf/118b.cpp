#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int n;
cin >> n;

int i, j;

for(i=0; i<n; i++)
{
	for(j=0; j< 2*(n-i); j++)
		cout << " ";
	for(j=i; j>(-1)*i; j--)
		cout << i - abs(j) << " ";
	cout << i - abs(j) << "\n";
}
for(; i>=0; i--)
{
	for(j=0; j< 2*(n-i); j++)
		cout << " ";
	for(j=i; j>(-1)*i; j--)
		cout << i - abs(j) << " ";
	cout << i - abs(j) << "\n";
}
return 0;
}
