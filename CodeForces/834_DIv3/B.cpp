#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	int m,sum;
	cin>>m>>sum;
	int actualSum=0;
	int maxi=INT_MIN;
	for(int i=0;i<m;i++)
	{
		int a;
		cin>>a;
		maxi=max(maxi,a);
		actualSum+=a;
	}
	int requiredS=((maxi)*(maxi+1))/2;

	int diff=requiredS-actualSum;
	if(sum<diff)
	{
		cout<<"NO"<<" ";
		return;
	}
	else if(sum==diff)
	{
		cout<<"YES"<<" ";
		return;
	}
	else
	{
		sum=sum-diff;
		int newS=0;
		int i=maxi+1;
		while(sum>newS)
		{
			newS+=i;
			i++;
		}
		if(sum==newS) cout<<"YES"<<" ";
		else cout<<"NO"<<" ";
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

