#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;
using vi=vector<int>;
using vll=vector<long long>;


void solve()
{
	ll n,t;
	cin>>n>>t;
	vll prefix;
	ll sum=0;
	for(int i=0;i<n;i++)
	{		ll a;
		cin>>a;
		sum+=a;
		prefix.push_back(sum);
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ll k;
		k=t;
		if(i) k=t+prefix[i-1];
		int pos=upper_bound(prefix.begin()+i,prefix.end(),k)- prefix.begin();
		ans=max(ans,pos-i);
	}
	cout<<ans;
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("./input.txt", "r", stdin);
freopen("./output.txt", "w", stdout);
#endif

long long t=1;
/*is Single Test case?*///cin>>t;
while(t--)
{
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

