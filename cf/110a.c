#include<iostream>
using namespace std;


int main()
{
long long int n;
cin >> n;


int count = 0;

while(n)
{
	if(n%10 == 4 || n%10 == 7)
		count++;
	n /= 10;
}

if( count == 7 || count == 4)
	cout << "YES" << endl;
else	cout<<"NO"<<endl;

return 0;
}
