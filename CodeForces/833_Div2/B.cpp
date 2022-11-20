#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	ll ans=n;
	for(int i=0;i<n;i++)
	{
		int q=min(100+i,n);
		unordered_map<char,ll>m;
		m[s[i]]++;
		ll maxFreq=1;
		for(ll j=i+1;j<q;j++)
		{
			m[s[j]]++;
			maxFreq=max(maxFreq,m[s[j]]);
			if(m.size()>=maxFreq) ans++;
		}

	}
	cout<<ans<<" ";


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

