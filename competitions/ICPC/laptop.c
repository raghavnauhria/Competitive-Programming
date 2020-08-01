#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		set<int> s;
		set<int> repeat;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			int pev=s.size();
			s.insert(x);
			if(s.size()==pev || repeat.find(x)!=repeat.end())
			{	s.erase(s.find(x));
				repeat.insert(x);
			}

		}
		cout<<*(s.begin())<<"\n";

	}
}