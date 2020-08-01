#include<iostream>
using namespace std;

int main()
{
int p, q, l, r;
cin >> p >> q >> l >> r;

int begin, end, i, j, a[1000] = {0}, b[1000] = {0}, time[1000] = {0}, ans=0;

for(i=0; i<p; i++)
{
	cin >> begin >> end;
	for(j= begin; j<=end; j++)
		a[j] = 1;
}
	
for(i=0; i<q; i++)
{
	cin >> begin >> end;
	for(j= begin; j<=end; j++)
		b[j] = 1;
}

for(i=0; i<1000; i++)
	for(j=0; j<=i; j++)
		if( a[i] && b[j] )
			time[i-j]=1;
		
for(i=l; i<=r; i++)
	if(time[i])
		ans++;

cout << ans << endl;

return 0;
}
