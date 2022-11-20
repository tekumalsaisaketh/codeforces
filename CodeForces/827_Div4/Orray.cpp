#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	int n;
	cin>>n;
	vector<ll>v;
	for(int i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		v.push_back(a);
	}
	ll prev=0;
	for(int i=0;i<min(n,31);i++)
	{
		ll a=-1;
		ll maxi=prev;
		for(int j=i;j<n;j++)
		{
			if((prev|v[j])>maxi)
			{
				maxi=prev|v[j];
				a=j;
			}
		}
		prev=maxi;
		if(a!=-1) swap(v[i],v[a]);
	}
	for(auto x:v) cout<<x<<" ";
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
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

