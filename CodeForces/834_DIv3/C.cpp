#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	ll l,r,x,a,b;
	cin>>l>>r>>x>>a>>b;
	if(a==b)
	{
		cout<<0;
		return;
	}
	if(b>r||b<l||a<l||a>r)
	{
		cout<<-1;
		return;
	}
	if(abs(a-b)>=x)
	{
		cout<<1;
		return;
	}
	if(a>b)
	{
		if(r-a>=x||b-l>=x)
		{
			cout<<2;
			return;
		}
		if(a-l<x||r-b<x)
		{
			cout<<-1;
			return;
			
		}
		cout<<3;
	}
	else{
		if(r-b>=x||a-l>=x)
		{
			cout<<2;
			return;
		}
		if(r-a<x||b-l<x)
		{
			cout<<-1;
			return;

		}
		cout<<3;
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

