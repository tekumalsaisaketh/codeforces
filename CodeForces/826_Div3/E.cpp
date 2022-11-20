#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;

bool dp[200100];
void solve()
{
	ll n;
	cin>>n;
	vector<ll>a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	memset(dp,false,sizeof(dp));
	dp[0]=true;
	for (int i = 1; i <= n; ++i) {
        if (i + a[i] <= n && dp[i-1]) dp[i + a[i]] = true;
        if (i - a[i] - 1 >= 0 && dp[i - a[i] - 1]) dp[i] = true;
    }
    cout << (dp[n] ? "YES" : "NO") << '\n';

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

