#include <bits/stdc++.h>
using namespace std;


vector<int> func(vector<string> a, vector<string> b)
{
	vector<int> ans;
	int len = a.size();

	string x, y;
	vector<int> count(26, 0);
	int temp;

	for(int i=0; i<len; ++i)
	{
		x = a[i];
		y = b[i];
		temp = -1;
		if(x.size() != y.size())
		{
			ans.push_back(temp);
			continue;
		}

		for(int j=0; j<26; ++j)
			count[j] = 0;

		temp = 0;
		for(int j=0; j<x.size(); ++j)
		{
			count[x[j]-'a']++;
			count[y[j]-'a']--;
		}

		for(int j=0; j<26; ++j)
			temp += abs(count[j]);

		ans.push_back(temp/2);
	}

	return ans;
}

unordered_map<int, int> m;

bool comp(int x, int y)
{
	if(m[x] == m[y])
		return x<y;
	else
		return m[x] < m[y];
}

void customSort(vector<int> a)
{
	int n = a.size();
	for(int i=0; i<n; ++i)
		if(m.count(a[i]) > 0)
			m[a[i]]++;
		else
			m[a[i]] = 1;

	sort(a.begin(), a.end(), comp);

	for(int i=0; i<n; ++i)
		cout << a[i] << endl;
}

string fractionToDecimal(int n) 
{ 
    string res;
    map <int, int> mp; 
    mp.clear();

    int numr = 1, rem = 1;
  
    while ( (rem!=0) && (mp.find(rem) == mp.end()) ) 
    { 
        mp[rem] = res.length();
        rem = rem*10;

        int res_part = rem / n;
        res += to_string(res_part);

        rem %= n;
    }

    return (rem == 0)? "" : res.substr(mp[rem]); 
}

int isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
  
    for (int i = 0; i <= N - M; i++)
    { 
        int j; 
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
} 

void reciprocal(int n)
{
	string res = fractionToDecimal(n);
    if (res == "")
        res = "0"; 

    int rem = 1;
    string ans;

    cout << "0.";
    while(1)
    {
    	rem *= 10;
    	int res_part = rem/n;
    	ans += to_string(res_part);

    	if(isSubstring(res, ans) >= 0)
    		break;

    	rem %= n;
    }

    cout << ans << " " << res << endl;
}

long maxPoints(vector<int> a)
{
	sort(a.begin(), a.end());

	unordered_map<int, long> ans; 
  	int n = a.size();

	for (int i = 0; i < n; i++) 
    	ans[a[i]]++; 
  
	long maximum = a[n-1]; 
  
	for(int i = 2; i <= maximum; i++)  
    	ans[i] = max(ans[i-1], ans[i-2] + ans[i] * i);

	return ans[maximum];
}

int main() 
{ 
    vector<int> a{2, 3, 4}; 
  	cout << maxPoints(a);
    return 0; 
} 