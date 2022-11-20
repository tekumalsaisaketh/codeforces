#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;



void solve()
{
	int n;
	cin>>n;
	vector<int>v;
	unordered_map<int,int>m;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		sum+=a;
		if(m.find(sum)==m.end()) m[sum]=i;
		v.push_back(a);
	}
	int ans=n;
	sum=0;
	for(int i=0;i<n-1;i++)
	{
		sum+=v[i];
		int x=2;
		int curr=i;
		int tempAns=i+1;
		while(m.find(x*sum)!=m.end())
		{
			tempAns=max(tempAns,m[x*sum]-curr);
			curr=m[x*sum];
			x++;
		}
		if(curr==n-1)
		{
			ans=min(ans,tempAns);
		}
	}
	cout<<ans<<" ";


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

