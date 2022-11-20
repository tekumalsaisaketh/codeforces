#include<bits/stdc++.h>
using namespace std;
void solve();



void solve()
{
	int n;
	cin>>n;
	vector<long long>v;
	unordered_map<long long,int>m;
	string ans="YES";
	while(n--)
	{
		long long x;
		cin>>x;
		v.push_back(x);
	}
	for(auto x:v)
	{
		m[x]++;
	}
	for(auto x:m)
	{
		if(x.second>1) ans="NO";
	}
	cout<<ans;
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

