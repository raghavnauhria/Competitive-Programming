#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char name[5][15]={"Sheldon","Leonard","Penny","Rajesh","Howard"};

int main()
{
ll n;
cin >> n;

ll sub = 5;

while( n > sub)
{
	n -=  sub;
	sub *= 2;
}

sub /= 5;

int ans = (n-1)/sub;

cout << name[ans] << endl;

return 0;
}
