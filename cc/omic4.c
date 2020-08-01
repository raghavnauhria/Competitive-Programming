# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
ll isprime[10000001],notsq[10000001],factors[10000001];
vector<ll> prime;

int main()
{
 
	isprime[0]=1;
	isprime[1]=1;
	ll i, j;
	for(i=1;i<10000001;i++)
	{
		if(!isprime[i])
		{
			prime.push_back(i);
 
			for(j=0;i*i+j*i<10000001;j++)
				isprime[i*i+j*i]=1;
 
			ll num = i*i;
 
			for(j=1;num*j<10000001;j++)
				notsq[num*j]=1;
 
		}
 
		for(j=1;j*i<10000001;j++)
			factors[i*j]+=i;
		
 
	}	
 
	//while(1)
	
		ll a, b, sum =0;
		cin>>a>>b;
		
		if( a < b)
		{
			for(i=a; i<=b; i++)
			{
				sum+= abs( 2*i - factors[i] );
			}
		}
		else	sum+= abs( 2*a - factors[a] );

//		cout<<factors[n]-n<<endl;
cout<<sum<<endl;	
 
return 0;
} 
