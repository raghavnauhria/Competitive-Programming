#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int t;
cin >> t;

int n, q, i, a, b, c, d, flag;

while(t--)
{
	cin >> n >> q;
	
	int in[n], rec1[n], rec2[n];
	for(i=0; i<n; i++)
		cin >> in[i];
	
	while(q--)
	{
		cin >> a >> b >> c >> d;
		
		flag=0;
		
		for(i=0; i<n; i++)
		{
			rec1[i] = in[i];
			rec2[i] = in[i];
		}
		sort( rec1+a-1, rec1+b);
		sort( rec2+c-1, rec2+d);
		
		/*
		for(i=0; i<=b-a; i++)
			cout << rec1[a-1+i] << " ";
		cout << endl;
		for(i=0; i<=b-a; i++)
			cout << rec2[c-1+i] << " ";
		cout << endl;
		*/
		for(i=0; i<=b-a; i++)
		{
			if(rec1[a-1+i] != rec2[c-1+i])
				flag++;
			if(flag > 1)
				break;
		}
		
		if(flag>1)
			cout << "NO" << endl;
		else	cout << "YES"<< endl;
	}
}

return 0;
}
