#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;
using vi=vector<int>;
using vll=vector<long long>;

void solve()
{
	int n;
	cin>>n;
	vector<pair<int,int>>a(n);
	for(int i=0;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		auto c=make_pair(x,y);
		a[i]=c;
	}
	sort(a.begin(),a.end());
	ll mini=min(a[0].first,a[0].second);
	for(int i=1;i<n;i++)
	{
		ll x;
		if(a[i].second>=mini)
		{
			
			x=a[i].second;
			
		}
		else x=a[i].first;
		mini=x;
	}
	cout<<mini;



}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
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

