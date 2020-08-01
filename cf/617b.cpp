#include<iostream>
#include<cstdlib>

//long long int abs( long long int n);

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int n;
cin >> n;

int a[n], i;

for(i=0; i<n; i++)
	cin >> a[i];
	
int pos1[2]= {-1, -1}, j=0;
long long int num = 1;

for(i=0; i<n; i++)
{
	if(a[i] == 1)
	{
		pos1[j] = i;
		j^=1;
		
		if( pos1[j] != -1)
		{
			num *= (pos1[j] - pos1[j^1]);
		}
		//cout << num << "\n";
		
	}
}

if( pos1[0] == -1)
	cout << "0";
else
	cout << abs(num);

return 0;
}
