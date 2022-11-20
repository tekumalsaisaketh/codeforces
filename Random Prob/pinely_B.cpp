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
	vi v(n);
	unordered_map<int,int>m;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		m[v[i]]++;
	}
	if(n==1)
	{
		cout<<1;
		return;
	}
	if(n==2)
	{
		cout<<2;
		return;
	}
	if(m.size()==2)
	{
		int s=0;
		for(auto x:m)
		{
			s=x.second;
		}
		cout<<(n-s+1);
		return;
	}
	cout<<n;
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

