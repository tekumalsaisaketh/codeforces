#include<bits/stdc++.h>
using namespace std;
void solve();



void solve()
{
	vector<vector<int>>v(8,vector<int>(8,-1));
	//red 1
	//blue 0
	//
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			char a;
			cin>>a;
			if(a=='R') v[i][j]=1;
			if(a=='B') v[i][j]=0;
		}
	}
	for(int i=0;i<8;i++)
	{
		int sum=0;
		bool noStrip=false;
		for(int j=0;j<8;j++)
		{
			if(v[i][j]!=-1) sum+=v[i][j];
			else
			{
				noStrip=true;
				break;
			} 
		}
		if(!noStrip) 
		{
			if(sum==8)
			{
				cout<<"R";
				return;
			}
		}

	}
	for(int i=0;i<8;i++)
	{
		int sum=0;
		bool noStrip=false;
		for(int j=0;j<8;j++)
		{
			if(v[j][i]!=-1) sum+=v[j][i];
			else
			{
				noStrip=true;
			} 
		}
		if(!noStrip) 
		{
			if(sum==0)
			{
				cout<<"B";
				return;
			}
		}

	}

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

