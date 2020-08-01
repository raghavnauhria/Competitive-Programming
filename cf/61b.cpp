/*
 * Link: http://codeforces.com/problemset/problem/61/B
 *
 * Problem: Hard Work
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

string temp;
vector<char> a[3];
int i;

for(i=0; i<3; i++)
{
	cin >> temp;
	
	for(j=0; j< temp.length(); j++)
	{
		if(temp[i] >
