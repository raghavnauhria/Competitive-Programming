#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int flag = 0, i;

	for(i=0; i<s.size(); i++)
	{
	    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
	    {
	        i += 2;
	        if(flag)
	            cout<<" ";
	        
	        continue;
	    }
	    else
	    {
	        flag = 1;
	        cout << s[i];
	    }
	}
	return 0;
}