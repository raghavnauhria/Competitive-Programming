#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll, pll> vll;
typedef pair<int, ii> tri;
typedef vector<tri> viii;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()

const ll MAX_SIZE = 1000001;
const ll N = 999997;
 
int main()
{
ios::sync_with_stdio(false);

ll j, i;

vector<int> isprime(MAX_SIZE , true);
vector<int> prime;
vector<int> SPF(MAX_SIZE);

isprime[0] = isprime[1] = false;

for(i=2; i<N ; i++)
{
	if(isprime[i] == true)
	{
		prime.push_back(i);
		SPF[i] = i;
	}
 
      for(j=0; j < prime.size() && i*prime[j] < N && prime[j] <= SPF[i]; j++)
      {
		isprime[ i*prime[j] ] = false;
		SPF[ i*prime[j] ] = prime[j];
      }
}

ll n, x, p;

cin >> n;

for(i=0; i<n; i++)
{
	cin >> x;
	
	p = sqrt(x);
	
	if( p*p == x && binary_search(prime.begin(), prime.end(), p) )
		cout << "YES\n";
	else
		cout << "NO\n";
	
}	
return 0;
}
