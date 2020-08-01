#include <bits/stdc++.h>
using namespace std;

int dirn[4][2] = {1,0,-1,0,0,1,0,-1};
char maze[500][500];
bool visited[500][500];
int n, m, k, cnt=0;

int dfs(int x, int y)
{
    if( x>=n||x<0 || y>=m||y<0 || visited[x][y]==1 || cnt<=0 || maze[x][y]=='#')
        return 0;

    cnt--;
    
    visited[x][y] = 1;
    
    for( int i=0; i<4; i++)
    {
        int nx = x + dirn[i][0];
		int ny = y + dirn[i][1];
           dfs(nx,ny);
    }
}

int main()
{
	cin >> n >> m >> k;

	int starti, startj;
	int i, j, x, y;

	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
		{
			cin >> maze[i][j];

			if(maze[i][j] == '.')
				starti = i, startj = j, cnt++;
		}

	cnt -= k;

	if(starti != -1 || startj != -1)
		dfs(starti, startj);

	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			if(visited[i][j] ==false && maze[i][j]=='.' && k>0 )
			{
				maze[i][j] = 'X';
				k--;
			}

	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			cout << maze[i][j];
		}
		cout << "\n";
	}

	return 0;
}