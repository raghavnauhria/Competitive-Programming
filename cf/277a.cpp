#include <bits/stdc++.h>

using namespace std;

int a[105], fa[105];  
  
void UF_set()  
{  
    for(int i = 0; i < 105; i++)  
    {
        fa[i] = i;
        a[i] = 0;
    }
}
  
int Find(int x)  
{
    if(x == fa[x])
        return x;
    else
        return Find(fa[x]);  
}

void Union(int a, int b)  
{
    int r1 = Find(a);  
    int r2 = Find(b);  
    if(r1 != r2)  
        fa[r2] = r1;  
}  
  
int main()  
{  
    int n, m, cnt = 0, ans = 0;
    scanf("%d %d", &n, &m);
    
    UF_set();

    int k, fir, next, i;

    while(n--)  
    {
        scanf("%d", &k);  
        if(k == 0) 
        {  
            ans++;  
            continue;  
        }

        scanf("%d", &fir);  
        a[fir]++;
        
        for(i = 1; i < k; i++)  
        {  
            scanf("%d", &next);  
            a[next]++;  
            Union(fir, next);  
        }  
    }  
    for(i = 1; i <= m; i++)  
    {  
        if(a[i] == 0)  
            cnt++;  
        if(fa[i] == i)        
            ans++;  
    }  
 
    printf("%d\n", (cnt == m) ? n : ans - cnt - 1);

    return 0;
}