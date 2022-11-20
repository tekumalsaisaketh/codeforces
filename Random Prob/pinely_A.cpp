#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;
using vi=vector<int>;
using vll=vector<long long>;

void solve()
{
	int n,a,b;
	cin>>n>>a>>b;
	if(a+b<n-1)
	{
		cout<<"YES";
		return;

	}
	if(a==n&&b==n)
	{	
		cout<<"YES";
		return;
	}
	cout<<"NO";

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

