#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<int, ld> pid;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef pair<ll, ld> pld;
typedef pair<ld, int> pdi;
typedef pair<ld, ll> pdl;
typedef pair<ld, ld> pdd;
typedef pair<string, int> psi;
typedef pair<string, ll> psl;
typedef pair<string, ld> psd;
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
typedef priority_queue<int> pq;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define cini(a) int a; cin >> a;
#define cinii(a, b) int a, b; cin >> a >> b;
#define ciniii(a, b, c) int a, b, c; cin >> a >> b >> c;
#define cinl(a) ll a; cin >> a;
#define cinc(c) char c; cin >> c;
#define cins(s) string s; cin >> s;
#define cinss(s1, s2) string s1, s2; cin >> s1 >> s2;
#define cinvi(v, n) vi v(n, 0); fi(i, 0, n) cin >> v[i];
#define cinvl(v, n) vl v(n, 0); fi(i, 0, n) cin >> v[i];
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define flush fflush(stdout)

#define print(v) for (auto it = v.begin(); it != v.end(); ++it) cout << *it << ' '; cout << endl;
#define printm(m) for (auto it = m.begin(); it != m.end(); ++it) cout << it->first<<' '<<it->second << endl; cout << endl;
#define disparr(arr,n) for(ll i=0;i<(n);i++)   cout<<arr[i]<<' ';  cout<<endl;
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
#define All(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int MOD = 1000000007;
const ll INF = 1e18;
const ld PI=3.141592653589793238462643383279502884197169399375105820974944;

int precedence(char op){ 
    if(op == '+'||op == '-') 
    	return 1; 
    if(op == '*'||op == '/')
	    return 2;
    return 0; 
}

pair<long long int, long long int> operator +(const std::pair<long long int, long long int>& x, const std::pair<long long int, long long int>& y) {
    return std::make_pair(x.first + y.first, x.second + y.second);
}

pair<long long int, long long int> operator *(const std::pair<long long int, long long int>& x, const std::pair<long long int, long long int>& y) {
    return std::make_pair(x.first * y.first, x.first * y.second);
}
  
// Function to perform arithmetic operations. 
pll applyOp(pll a, pll b, char op){ 
    switch(op){ 
        case '+': return a + b;
        case '*': return a * b;
    } 
}

bool isDir(char a)
{
	if( a == 'N' || a == 'S' || a == 'E' || a == 'W')
		return true;
	else
		return false;
}

pll getVal(char a)
{
	pll ans(0, 0);
	if( a == 'N')
	{
		ans.ss = -1;
	}
	else if( a == 'S')
	{
		ans.ss = 1;
	}
	else if( a == 'E')
	{
		ans.ff = 1;
	}
	else if( a == 'W')
	{
		ans.ff = -1;
	}
	else
		ans.ff = (ll)(a-'0');
	
	return ans;
}

pll evaluate(string tokens, ll mod)
{ 
    ll i; 

    // stack to store integer values. 
    stack <pll> values; 
      
    // stack to store operators. 
    stack <char> ops; 
      
    for(i = 0; i < tokens.length(); i++)
    {      
        // Current token is an opening  
        // brace, push it to 'ops' 
        if(tokens[i] == '(')
        { 
            ops.push(tokens[i]); 
        }  
        // Current token is a number, push  
        // it to stack for numbers. 
        else if(isDir(tokens[i]) || (tokens[i] >= '2' && tokens[i] <= '9'))
        {
            values.push(getVal(tokens[i])); 
        }
        // Closing brace encountered, solve  
        // entire brace. 
        else if(tokens[i] == ')') 
        { 
            while(!ops.empty() && ops.top() != '(') 
            { 
                pll val2 = values.top(); 
                values.pop(); 
                  
                pll val1 = values.top(); 
                values.pop(); 
                  
                char op = ops.top(); 
                ops.pop(); 
                
                pll temp = applyOp(val1, val2, op);
                temp.ff %= mod;
                temp.ss %= mod;
                values.push(temp); 
            } 
              
            // pop opening brace. 
            if(!ops.empty()) 
               ops.pop(); 
        }
        // Current token is an operator. 
        else
        { 
            // While top of 'ops' has same or greater  
            // precedence to current token, which 
            // is an operator. Apply operator on top  
            // of 'ops' to top two elements in values stack. 
            while(!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])){ 
                pll val2 = values.top(); 
                values.pop(); 
                  
                pll val1 = values.top(); 
                values.pop(); 
                  
                char op = ops.top(); 
                ops.pop(); 
                
                pll temp = applyOp(val1, val2, op);
                temp.ff %= mod;
                temp.ss %= mod;
                values.push(temp); 
            } 
              
            // Push current token to 'ops'. 
            ops.push(tokens[i]); 
        } 
    } 
      
    // Entire expression has been parsed at this 
    // point, apply remaining ops to remaining 
    // values. 
    while(!ops.empty()){ 
        pll val2 = values.top(); 
        values.pop(); 
                  
        pll val1 = values.top(); 
        values.pop(); 
                  
        char op = ops.top(); 
        ops.pop(); 
                  
        pll temp = applyOp(val1, val2, op);
        temp.ff %= mod;
        temp.ss %= mod;
        values.push(temp); 
    } 
      
    // Top of 'values' contains result, return it. 
    return values.top(); 
}

int main()
{
	fastio; //Remove for interactive problems

	cini(t);

	fi(i, 0, t)
	{
		cins(s);
		ll w_col=1, h_row=1, n=sz(s), len = 1000000000;

		string exp;
		fi(ii, 0, n-1)
		{
			if(isDir(s[ii]) || s[ii] == ')')
			{
				exp.pb(s[ii]);
				if(s[ii+1] != ')')
					exp.pb('+');
			}
			else if(s[ii]>= '2' && s[ii] <= '9')
			{
				exp.pb(s[ii]);
				exp.pb('*');
			}
			else
				exp.pb(s[ii]);
		}

		exp.pb(s[n-1]);
		pll offset = evaluate(exp, len);
		// ((x % 5) + 5) % 5
		offset.ff = (((offset.ff%len) + len) % len);
		offset.ss = (((offset.ss%len) + len) % len);

		offset.ff++; offset.ss++; len++;

		offset.ff = (((offset.ff%len) + len) % len);
		offset.ss = (((offset.ss%len) + len) % len);

		cout << "Case #" << i+1 << ": " << offset.ff sp offset.ss << "\n";
	}

	return 0;
}