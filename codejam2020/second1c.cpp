#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;
typedef pair<string, int> psi;
typedef pair<string, ll> psl;
typedef pair<pii, int> tri;
 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<pdd> vpd;
typedef vector<tri> viii;
 
typedef map<int,int> mii;
typedef map<char,int> mci;
typedef map<string, int> msi;
typedef map<string, vi> msv;
typedef unordered_map<int, int> umap;
typedef unordered_map<ll, ll> umapl;
typedef priority_queue<int> pq;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define cini(a) int a; cin >> a;
#define cinii(a, b) int a, b; cin >> a >> b;
#define ciniii(a, b, c) int a, b, c; cin >> a >> b >> c;
#define cinl(a) ll a; cin >> a;
#define cinll(a, b) ll a, b; cin >> a >> b;
#define cinlll(a, b, c) ll a, b, c; cin >> a >> b >> c;
#define cinc(c) char c; cin >> c;
#define cins(s) string s; cin >> s;
#define cinss(s1, s2) string s1, s2; cin >> s1 >> s2;
#define cinvi(v, n) vi v(n, 0); fi(i, 0, n) cin >> v[i];
#define cinvl(v, n) vl v(n, 0); fi(i, 0, n) cin >> v[i];
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define flush fflush(stdout)

#define print(v) for (auto it = v.begin(); it != v.end(); ++it) cout << *it << ' '; cout << endl;
#define printm(m) for (auto it = m.begin(); it != m.end(); ++it) cout << it->first<<' '<<it->second << endl; cout << endl;
#define disparr(arr,n) for(ll i=0;i<(n);++i)   cout<<arr[i]<<' ';  cout<<endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;

#define LC(i) 2*(i)+1
#define RC(i) 2*(i)+2
#define MID(i,j) ((i)+(j))/2
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))

#define nn "\n"
#define sp << " " <<
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int MOD = 1000000007;
const ll INF = 1e18;
const ld PI=3.141592653589793238462643383279502884197169399375105820974944;

int num_dig(ll n) 
{ 
    string num = to_string(n);
    return num.size();
}
int firstDigit(ll n) 
{ 
    while (n >= 10)  
        n /= 10;
    return n; 
} 
bool Cmp(pair<int, char> a, pair<int, char> b)
{
    return (a.ff > b.ff);
}

int main()
{
	fastio; //Remove for interactive problems

	cini(t);
	fi(tt, 0, t)
	{
		cini(u);
		vl q(10000, 0);
		vs r(10000, "a");
		unordered_map<char, int> temp;
		unordered_map<char, int> single;
		vc ulta(10, 'a');


		fi(i, 0, 10000)
		{
			cin >> q[i] >> r[i];

			for(auto c: r[i])
				temp[c]++;
		}

		int count = 0;
		for(auto i:temp)
		{
			// cout << i.first << " ";
			single[i.first] = count;
			ulta[count] = i.first;

			count++;
		}

		// if(q[0] == -1)
		// {
		// 	// solve();
		// 	string ans(10, 'a');

		// 	vi freq(10, 0);

		// 	// fi(i, 0, 10)
		// 	// 	freq[i] = temp[ulta[i]];

		// 	vector<bool> zero(10, true);
		// 	fi(i, 0, 10000)
		// 	{
		// 		int col = single[r[i][0]];
		// 		freq[col]++;
		// 		zero[col] = false;
		// 	}

		// 	fi(i, 0, 10)
		// 		if(zero[i])
		// 		{
		// 			ans[0] = ulta[i];
		// 			freq[i] = INT_MAX;
		// 			break;
		// 		}

		// 	int lastdig = 9;
		// 	fi(ii, 0, 9)
		// 	{
		// 		int minimum = INT_MAX, minIndex;
		// 		fi(i, 0, 10)
		// 			if(freq[i] < minimum)
		// 			{
		// 				minimum = freq[i];
		// 				minIndex = i;
		// 			}

		// 		ans[lastdig] = ulta[minIndex];
		// 		lastdig--;
		// 	}

		// 	cout << "Case #" << tt+1 << ":" sp ans << endl;
		// 	continue;
		// }
		if(q[0] == -1)
        {
            vector<pair<int, char>> temptemp;
            vc ans2;

            vector<bool> zero(10, true);
            map<char, int> freq;

			fi(i, 0, 10000)
			{
				int col = single[r[i][0]];
				freq[r[i][0]]++;
				zero[col] = false;
			}
			fi(i, 0, 10)
				if(zero[i])
				{
					ans2.pb(ulta[i]);
					break;
				}

            // ans2.pb(ans[0]);
            for (auto y : freq)
            {
                // debug2(y.fi,y.se)
                temptemp.pb(mp(y.ss, y.ff));
            }
            sort(all(temptemp), Cmp);
            fi(i, 0, temptemp.size())
            {
                if (temptemp[i].ss != ans2[0])
                    ans2.pb(temptemp[i].ss);
            }

            cout << "Case #" << tt+1 << ": " ;//ans2 << endl;

            fi(i, 0, ans2.size())
            {
                cout << ans2[i];
            }
            cout << nn;

            continue;
        }

		// fi(i, 0, 10)
		// 	cout << i << ": " << ulta[i] << nn;

		// cout << endl;

		bool dig[10][10];
		fi(i, 0, 10)
			fi(j, 0, 10)
				dig[i][j] = true;

		fi(i, 0, 10000)
		{
			int col = single[r[i][0]];
			dig[0][col] = false;
			// cout << col <<  " ";
			// cout << r[i][0] << " ";

			if(num_dig(q[i]) == r[i].length())
			{
				// cout << q[i] << " ";
				int tmp = firstDigit(q[i]);
				for(int j=tmp+1; j<=9; ++j)
					dig[j][col] = false;
			}
			// if(!dig[0][1])
			// 	cout << "Here " << i << endl;
		}

		string ans(10, 'a');
		vi mcnt(10, 0);
		fi(i, 0, 10)
			fi(j, 0, 10)
				if(dig[i][j])
					mcnt[i]++;

		fi(ii, 0, 10)
		{
			int minimum=11, minIndex;
			fi(i, 0, 10)
				if(mcnt[i] < minimum)
				{
					minimum = mcnt[i];
					minIndex = i;
				}

			fi(j, 0, 10)
			{
				if(dig[minIndex][j])
				{
					ans[minIndex] = ulta[j];
					fi(i, 0, 10)
					{
						if(dig[i][j])
							mcnt[i]--;
						dig[i][j] = false;
					}
					mcnt[minIndex] = 11;
					break;
				}
			}
		}

		// fi(i, 0, 10)
		// {
		// 	fi(j, 0, 10)
		// 	{
		// 		if(dig[i][j])
		// 		{
		// 			// cout << "Here";
		// 			ans[i] = ulta[j];
		// 			break;
		// 		}
		// 	}
		// }

		cout << "Case #" << tt+1 << ":" sp ans << endl;
	}

	return 0;
}