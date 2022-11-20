#include<bits/stdc++.h>
using namespace std;
void solve();

using ll = long long;

void solve()
{
	int n,q;
	cin>>n>>q;
	vector<ll>v;
	vector<ll>pref;
	vector<ll>sum;
	ll s=0;
	ll maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		v.push_back(x);
		s+=x;
		sum.push_back(s);
		maxi=max(maxi,x);
		pref.push_back(maxi);

	}
	for(int i=0;i<q;i++)
	{
		ll k;
		cin>>k;
		int start=0;
		int end=n-1;
		int ans=-1;
		while(start<=end)
		{
			int mid=(start+end)/2;
			if(k>=pref[mid])
			{
				start=mid+1;
				ans=mid;
			}
			else
			{
				end=mid-1;
			}
		}
		if(ans==-1) cout<<0<<" ";
		else cout<<sum[ans]<<" ";
	}
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

