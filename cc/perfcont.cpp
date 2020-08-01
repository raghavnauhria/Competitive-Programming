#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int t;
scanf("%d", &t);

int n, p, x, i;
int cnt1, cnt2;

while(t--)
{
	scanf("%d %d", &n, &p);
	cnt1 = cnt2 = 0;

	for(i=0; i<n; i++)
	{
		scanf("%d", &x);
		if(p/x >= 10)
			cnt1++;
		else if(p/x <= 2)
			cnt2++;
	}

	if(cnt1==2 && cnt2==1)
		printf("yes\n");
	else
		printf("no\n");
}

return 0;
}
