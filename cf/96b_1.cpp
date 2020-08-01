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
#define MOD 1000000007

ll ar[] = {47, 74, 4477, 4747, 4774, 7447, 7474, 7744, 444777, 447477, 447747, 447774, 474477,
    474747, 474774, 477447, 477474, 477744, 744477, 744747, 744774, 747447, 747474,
    747744, 774447, 774474, 774744, 777444, 44447777, 44474777, 44477477, 44477747,
    44477774, 44744777, 44747477, 44747747, 44747774, 44774477, 44774747, 44774774,
    44777447, 44777474, 44777744, 47444777, 47447477, 47447747, 47447774, 47474477,
    47474747, 47474774, 47477447, 47477474, 47477744, 47744477, 47744747, 47744774,
    47747447, 47747474, 47747744, 47774447, 47774474, 47774744, 47777444, 74444777,
    74447477, 74447747, 74447774, 74474477, 74474747, 74474774, 74477447, 74477474,
    74477744, 74744477, 74744747, 74744774, 74747447, 74747474, 74747744, 74774447,
    74774474, 74774744, 74777444, 77444477, 77444747, 77444774, 77447447, 77447474,
    77447744, 77474447, 77474474, 77474744, 77477444, 77744447, 77744474, 77744744,
    77747444, 77774444, 4444477777};

int main()
{
ll i, n, len;

cin >> n;

len = sizeof(ar) / sizeof(ar[0]);
for(i = 0; i<len; i++)
{
    if(ar[i] >= n)
    {
        cout << ar[i] <<"\n";
        break;
    }
}

return 0;
}