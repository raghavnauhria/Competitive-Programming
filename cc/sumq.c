#include<iostream>
#include<algorithm>

#define mod 1000000007
int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

int p, q, r;

while(t--)
{
	cin >> p >> q >> r;
	
	int a[p], b[q], c[r];
	
	for(i=0; i<p; i++)
		cin >> a[i];
	for(i=0; i<q; i++)
		cin >> b[i];
	for(i=0; i<r; i++)
		cin >> c[i];
	sort(a, a+p);
	sort(b, b+q);
	sort(c, c+r);
	
