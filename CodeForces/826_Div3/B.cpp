#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	int n;
	cin>>n;
	if(n==3) 
	{
		cout<<-1;
		return;
	}
	int i=0;
	if(n%2==0)
	{
		while(n>0)
		{
			cout<<n<<" ";
			n--;
		}
		return;
	}
	else
	{
		int x=n/2;
		while(i<x)
		{
			cout<<n<<" ";
			n--;
			i++;
		}
		i=1;
		while(i<=n)
		{
			cout<<i<<" ";
			i++;
		}
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

