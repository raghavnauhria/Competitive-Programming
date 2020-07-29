#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
#define MOD 1000000007
#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()

int binomialCoeff(int n, int k)  
{  
    int res = 1;  
  
    // Since C(n, k) = C(n, n-k)  
    if ( k > n - k )  
        k = n - k;  
  
    // Calculate value of  
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]  
    for (int i = 0; i < k; ++i)  
    {  
        res *= (n - i);  
        res /= (i + 1);  
    }  
  
    return res;  
}  

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, n, k;
	cin >> t;
	
	while(t--)
	{
	    cin >> n >> k;
	    vector<int> a(n, 0);
	    for(int i=0; i<n; ++i)
	        cin >> a[i];
	        
	   sort(a.begin(), a.end());
	   
	   if(n>k && a[k-1] == a[k])
	   {
	       int lcount=0, rcount=0, i=k;
	       while(i<n && a[i] == a[k])
	       {
	           rcount++;
	           i++;
	       }
	       i=k-1;
	       while(i>=0 && a[i] == a[k-1])
	       {
	           lcount++;
	           i--;
	       }
	       cout << binomialCoeff(lcount+rcount,lcount) << endl;
	   }
	   else
	       cout << "1\n";
	}
	
	return 0;
}