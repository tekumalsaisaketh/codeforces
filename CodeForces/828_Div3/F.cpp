#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	int n;
	cin>>n;
	vector<int>v(n+1);
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v[a]=i;
	}
	//try after some thime
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

