#include<bits/stdc++.h>
using namespace std;
void solve();



void solve()
{
	long long n,l,k;
	cin>>n>>l>>k;
	if(n>=(l+k))
	{
		long long x=n-l-k;
		long long y=x*(x-1);
		y/=2;
		cout<<((n-l)*l+(n-l-k)*k+y);
	}
	else
	{
		long long diff=l+k-n;
		n=n-diff;
		l=l-diff;
		k=k-diff;
		cout<<((n-l)*l+(n-l-k)*k);
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

