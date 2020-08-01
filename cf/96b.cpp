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

ll x;
vl a;
vi dig;

void initialise()
{
    dig.push_back((int)4);
    dig.push_back((int)7);

    while(dig.size()<=8)
    {
        do
        {
            x = 0;
            fi(i, 0, dig.size())
                x = x*10 + dig[i];
             a.push_back(x);
        }
    
        while(next_permutation(dig.begin(), dig.end()) );
    
        dig[dig.size()/2] = 4;
        dig.push_back(7);
        dig.push_back(7);   
    }

    a.push_back(4444477777);
}

int main()
{
ios::sync_with_stdio(false);

cin >> x;

initialise();
/*
fi(i, 0 , a.size())
{
    cout << a[i] << " ";
}
*/
int i;
for( i=0; i<a.size(); i++)
{
    if(a[i] >= x){
        cout << a[i] << "\n";
        break;
    }
}
  
return 0;
}
