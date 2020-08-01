#include <bits/stdc++.h>

#define MAXV    100
#define MAXE    (MAXV*MAXV)

using namespace std;

typedef struct
{
    int to, next;
} Edge;

Edge E[MAXE];

int SizeE;
int Adj[MAXV];
bool Visited[MAXV];

typedef struct
{
    int x, y;
} Point;
Point P[MAXV];

void Add_Edge(int u, int v)
{
    E[SizeE].to = v;
    E[SizeE].next = Adj[u];
    Adj[u] = SizeE++;
}

void BFS(int start)
{
    int Queue[MAXV];
    int Head=0, Tail=1, count=1, i, j;
    
    Visited[start] = true;
    Queue[0] = start;

    while(Head < Tail)
    {
        for(i = Head; i < Tail; i++)
        {
            for(j = Adj[Queue[i]]; ~j; j = E[j].next)
            {
                if( Visited[E[j].to] == false )
                {
                    Visited[E[j].to] = true;
                    Queue[count++] = E[j].to;
                }
            }
        }
        Head = Tail;
        Tail = count;
    }
}

int main()
{
    int n, i, j, components=0;
    scanf("%d", &n);
    
    for(i = 0; i <= n; i++)
        Adj[i] = -1;

    SizeE = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &P[i].x, &P[i].y);

        for(j = 0; j < i; j++)
            if(P[i].x == P[j].x || P[i].y == P[j].y)
            {
                Add_Edge(i, j);
                Add_Edge(j, i);
            }
    }

    for(i = 0; i < n; i++)
        if(Visited[i] == false)
        {
            components++;
            BFS(i);
        }
    
    printf("%d\n", components-1);
    return 0;
}