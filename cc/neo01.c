#include<iostream>
#include<algorithm>

//#define endl \n
using namespace std;

int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

int n,  i, sumpos = 0, countpos = 0, negsum=0, flag = 0;
long long int ans, temp;

while(t--)
{
	cin  >> n;

	int a[n];
	sumpos = 0;
	countpos = 0;
	negsum=0;
	flag = 0;
	ans = 0;
	for(i=0; i<n; i++)
	{
		cin >> a[i];
		
		if(a[i] >=0)
		{
			sumpos += a[i];
			countpos ++;
		}
		else
			negsum += a[i];
	}
	
	sort(a, a+n);
	
	ans = countpos*sumpos + negsum;
	
	if( ans == negsum )
	{
		cout << ans << endl;
		continue;
	}
	
	for(i=n-countpos-1; i>=0; i--)
	{		
		sumpos += a[i];
		negsum -= a[i];
		temp = (n-i)*sumpos + negsum;
		if( ans < temp)
		{
			ans = temp;
			flag = 1;
		}
		if(flag == 0)
			break;	
	}
	
	cout << ans << endl;
}
	
return 0;
}
