#include<iostream>
#include<cstring>
using namespace std;

int main()
{
char* s;
cin  >> s;

//const char* dub1 = "WUB";
char* a = strtok( s, "W");
a = strtok( s, "U");
a = strtok( s, "B");
while( a != NULL)
{
	cout<< a << endl;
	a = strtok( NULL, "W");
	a = strtok( NULL, "U");
	a = strtok( NULL, "B");
}

return 0;
}
