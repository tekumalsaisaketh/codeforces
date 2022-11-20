#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	ll n,k;
	cin>>n>>k;
	ll sum=k;
	if(n==k)
	{
		cout<<1;
		return;
	} 
	if(n<k)
	{
		sum=k;
		ll a=(sum)/n;
		ll b=sum%n;
		if(b!=0) cout<<a+1<<" ";
		else cout<<a<<" "; 
	}
	else
	{
		int c=n/k;
		int d=n%k;
		if(d!=0) c++;
		k*=c;

		sum=k;
		ll a=(sum)/n;
		ll b=sum%n;
		if(b!=0) cout<<a+1<<" ";
		else cout<<a<<" "; 
	}

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

