#include<iostream>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int n, k, t;
cin >> n >> k >> t;

int count=0, i;

while( (float)(count+1)*100/(float)n <= t )
	count++;
	
for(i=0; i<count; i++)
	cout << k << " ";

int x=0;

while( (float)(count*k+x+1)*100/(float)(n*k) <= t)
	x++;
if(count < n)
cout << x << " ";

for(i=0; i< n-count-1; i++)
	cout << "0 ";

return 0;
}
