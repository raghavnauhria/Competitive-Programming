#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

long long int a, b;
cin >> a >> b;
long long int temp;

if(a > b)
{
	temp = a;
	a=b;
	b=temp;
}

long long int fact=1, i;
for(i=1; i<=a; i++)
	fact = fact*i;

cout << fact;
return 0;
}
