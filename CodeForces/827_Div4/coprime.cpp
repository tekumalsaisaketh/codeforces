#include<bits/stdc++.h>
using namespace std;
void solve();


int cop(int a,int b)
{
	int cnt=0;
	if(a==b&&b!=1) return 0; 
	for(int i=1;i<=32;i++)
	{
		if(a%i==0)
		{
			if(b%i==0) cnt++;
		}
	}
	return cnt;
}

void solve()
{
	int n;
	cin>>n;
	vector<int>v(1002,-1);
	int ans=-1;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v[a]=i;
	}
	for(int i=0;i<1002;i++)
	{
		for(int j=0;j<1002;j++)
		{
			if(v[i]!=-1&&v[j]!=-1)
			{
				int a=cop(i,j);
				if(a==1) ans=max(ans,v[i]+v[j]+2);
			}
		}
	}
	cout<<ans;
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

