#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;
void solve()
{
	ll n,m;
	cin>>n>>m;
	if(n>m)
	{
		cout<<n-m;
		return;
	}
	if(n>m)
	{
		cout<<n-m;
		return;
	} 
	int c=0;
	while(m>n)
	{
		if(m%2==0) m=m/2;
		else {
			m=(m+1)/2;
			c++;
		}
		c++;
	}
	cout<<(n-m)+c;


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

