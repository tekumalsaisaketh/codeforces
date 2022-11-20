#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;

int getIt(ll i, ll h,ll n,vector<ll>&v,int g,int b)
{
	if(i==n) return 0;
	int ans=INT_MIN;
	//cout<<v[i]<<" "<<h<<" "<<g<<" "<<b<<" "<<endl;
	if(h<=v[i])
	{
		//cout<<" came";
		if(g==0&&b==0) return INT_MIN;
		for(int k=0;k<=g;k++)
		{
			for(int j=0;j<=b;j++)
			{
				if(k)
				{
					h=2*k*h;
				}
				if(j)
				{
					h=3*j*h;
				}
				if(k||j) ans=max(ans,getIt(i,h,n,v,g-k,b-j));
				//else return -1;
			}
		}

	}
	else
	{
		h=h+(v[i]/2);
		if(getIt(i+1,h,n,v,g,b)!=INT_MIN) ans=1+getIt(i+1,h,n,v,g,b);
	}	
	return ans;
}
void solve()
{
	int n;
	int h;
	cin>>n>>h;
	vector<ll>v;
	for(int i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	cout<<getIt(0,h,n,v,2,1);
	
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

