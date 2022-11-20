#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	ll n,m;
	cin>>n>>m;
	int t=0;
	int f=0;
	ll y=n;
	while(y%2==0)
	{
		t++;
		y=y/2;
	}
	y=n;
	while(y%5==0)
	{
		f++;
		y=y/5;
	}
	ll ans=n*m;
	int o=0;
	int p=0;
	while(pow(2,o)*pow(5,p)<m)
	{
		o++;
		p++;
	}
	cout<<n*pow(2,o--)*pow(5,p--);


}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

long long t=1;
/*is Single Test case?*/cin>>t;
while(t--)
{
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

