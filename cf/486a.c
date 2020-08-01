#include<iostream>
using namespace std;

int main()
{
long long int a;
cin >> a;

if( a%2 == 0 )
	cout << a/2 << endl;
else
	cout << (-1)*(a+1)/2 << endl;
	
return 0;
}
