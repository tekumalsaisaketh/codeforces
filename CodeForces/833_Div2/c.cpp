#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;

void solve()
{
	ll n;
	cin>>n;
	vector<ll>v(n);
	vector<ll>prefix(n);
	ll altAns=0;
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
		if(i==0) prefix[i]=v[i];
		else prefix[i]=v[i]+prefix[i-1];
		if(prefix[i]==0) altAns++;
	}
	ll ans=0;
	int firstIndex=n;
	for(ll i=0;i<n;i++)
	{
		if(v[i]==0)
		{
			if(firstIndex==n) firstIndex=i;
			bool join=true;
			int maxF=1;
			map<ll,int>m;
			while(i<v.size()&&(v[i]!=0||join))
			{
				//cout<<v[i]<<" ";
				join=false;
				m[prefix[i]]++;
				if(maxF<m[prefix[i]])
				{
					maxF=m[prefix[i]];
				}
				i++;
			}
			ans+=maxF;
			i--;
		}
	}
	for(int i=0;i<firstIndex;i++)
	{
		if(prefix[i]==0) ans++;
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

