#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;

vector<ll>d1;
vector<ll>d2;
void zi(ll x,int q)
{
	for(ll i=1;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			if(q){
				d1.push_back(i);
				d1.push_back(x/i);
			} 
			else{
				d2.push_back(i);
				d2.push_back(x/i);
			} 
		}
	}
}
void solve()
{
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	d1.clear();
	d2.clear();
	zi(a,1);
	zi(b,0);
	ll o;
	ll p;
	for(auto m:d1)
	{
		for(auto n:d2)
		{
			ll a1=m;
			ll a2=a/a1;
			ll b1=n;
			ll b2=b/b1;
			ll k1=c/(a1*b1);
			ll k2=d/(a2*b2);
			o=k1*a1*b1;
			p=k2*a2*b2;
			if(o>a&&o<=c&&p>b&&p<=d)
			{
				cout<<o<<" "<<p<<" ";
				return;
			}
		}
	}
	cout<<-1<<" "<<-1;
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

