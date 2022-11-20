#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;
using vll=vector<long long>;

void solve()
{
	int n,q;
	cin>>n>>q;
	ll e=0;
	ll o=0;
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		sum+=a;
		if(a%2==0) e++;
		else o++;
	}
	for(ll i=0;i<q;i++)
	{
		ll type,val;
		cin>>type>>val;
		if(!type) 
		{
			sum+=(e*val);
			if(val%2!=0)
			{
				o+=e;
				e=0;
			}
		}
		else
		{
			sum+=(o*val);
			if(val%2!=0)
			{
				e+=o;
				o=0;
			}
		}
		cout<<sum<<endl;
	}
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("./output.txt", "w", stdout);
#endif

long long t=1;
/*is Single Test case?*/cin>>t;
while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

