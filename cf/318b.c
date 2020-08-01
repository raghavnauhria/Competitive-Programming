#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
string s;

cin >> s;

string a = "heavy";
string b = "metal";

vector<int> pos;

int x;

size_t found_a = s.find(a);
size_t found_b = s.find(b);

while( found_a < s.size() || found_b < s.size() )
{
	if(found_a < found_b)
	{
		x=0;
		pos.push_back(x);
		found_a = s.find(a, found_a + 1, 5);
	}
	else
	{
		x=1;
		pos.push_back(x);
		found_b = s.find(a, found_b + 1, 5);
	}
}

cout << pos << endl;

return 0;
}
