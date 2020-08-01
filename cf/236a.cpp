#include<iostream>
#include<string>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

string s;
cin >> s;

int i, a[26], sum = 0;
for(i=0; i<26; i++)
	a[i] = 0;
	
for(i=0; i< s.length(); i++)
	a[ s[i]-'a' ] = 1;

for(i=0; i<26; i++)
	sum += a[i] ;
	
if( sum%2 )
	cout << "IGNORE HIM!";
else	cout << "CHAT WITH HER!";

return 0;
}
