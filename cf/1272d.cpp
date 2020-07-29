#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll, pll> vll;
typedef pair<ii, int> tri;
typedef vector<tri> viii;
typedef unordered_map<int, int> umap;
typedef priority_queue<int> pq;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define sc(x) scanf("%d", &x)
#define sc2(x, y) scanf("%d %d", &x, &y)
#define sc3(x) scanf("%s", x)
#define sc4(x) scanf("%lld", &x)
#define sc5(x, y) scanf("%lld %lld", &x, &y)

int seg(int a[], int n) 
{ 
    int l[n], r[n+1], ans = 0; 
      
    // calculating the l array. 
    l[0] = 1; 
    for (int i = 1; i < n; i++)
    { 
        if (a[i] > a[i - 1])
        { 
            l[i] = l[i - 1] + 1; 
            ans = max(ans, l[i]); 
        } 
        else
            l[i] = 1; 
    }

    // if (ans != n) 
    //     ++ans; 
  
    // calculating the r array. 
    r[n] = 0; 
    for (int i = n - 1; i >= 0; i--)
    { 
        if (a[i] < a[i + 1]) 
            r[i] = r[i + 1] + 1; 
        else
            r[i] = 1; 
    } 
  
    // updating the answer. 
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i + 1] - a[i - 1] > 0) 
            ans = max(ans, l[i - 1] + r[i + 1]); 
    } 
    
    return max(ans, r[0]); 
} 
  
// driver function. 
int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; ++i)
    	cin >> a[i];

    cout << seg(a, n) << endl;

    return 0; 
} 