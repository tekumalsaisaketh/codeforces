#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;

int sol(ll x,int i,vector<int>&twoInI)
{
	int c=0;
	while(x%2==0)
	{
		x=x/2;
		c++;
	}
	int d=0;
	while(i%2==0)
	{
		i=i/2;
		d++;
	}
	twoInI.push_back(d);
	return c;
}

void solve()
{
	int n;
	cin>>n;
	vector<ll>v(n);
	vector<int>twoInI;
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		sum+=sol(v[i],i+1,twoInI);
	}
	int ans=0;
	if(sum>=n) 
	{
		cout<<0;
		return;
	}
	else
	{
		sort(twoInI.begin(),twoInI.end());
		reverse(twoInI.begin(),twoInI.end());
		for(auto x:twoInI)
		{
			sum+=x;
			ans++;
			if(sum>=n)
			{
				cout<<ans;
				return;
			} 
		}
	}
	if(sum>=n)
	{
		cout<<ans;
	}
	else cout<<-1;
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

