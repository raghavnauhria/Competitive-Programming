#include<iostream>
using namespace std;

int main()
{
int t;

cin >> t;

int n;
int x, sum, pos;

while(t--)
{
	cin >> n;
	sum = 0;
	pos = 0;
	
	while(n--)
	{
		cin >> x;
		sum+=x;
		if(x > 0)
			pos++;
	}
	
	if(sum>=100 && sum<100+pos)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

return 0;
}
