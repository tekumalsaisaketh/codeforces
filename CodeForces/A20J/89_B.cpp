#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	int n;
	cin>>n;
	vector<vector<char>>v(2*n+1,vector<char>(2*n+1,' '));
	int i=0;
	bool go=false;
	while(i>=0)
	{
		int a=0;
		for(int j=0;j<2*n+1;j++)
		{
			if(j<=n+i&&j>=n)
			{
				v[i][j]='0'+a;
				a--;
			}
			else if(j>=n-i&&j<n)
			{
				v[i][j]='0'+a;
				a++;
			}
			if(j<n+i) cout<<v[i][j]<<" "; 
			else if(j==n+i) cout<<v[i][j];
		}
		if(i==n)
		{
			go=true;
		}
		if(go) i--;
		else i++;
		cout<<endl;
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
/*is Single Test case?*///cin>>t;
while(t--)
{
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

