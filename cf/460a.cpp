#include<iostream>

using namespace std;

int main()
{
ios::sync_with_stdio(false);

int n, m;

cin >> n >> m;

int ans = n;

ans +=(int)( (n-1)/(m-1) );

cout << ans;

return 0;
}
