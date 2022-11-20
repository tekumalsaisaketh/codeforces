#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	int m,s;
	cin>>m>>s;
	string mini="";
	string maxi="";
	int sum=s;
	int start=true;
	if(s==0&&m==1) cout<<0<<" "<<0;
	else if(s==0||s>(m*9)) cout<<-1<<" "<<-1;
	else
	{
		for(int i=0;i<m;i++)
		{

			if(sum==0)
			{
				mini+=to_string(0);
			}
			else if(start&&sum<(m-i-1)*9)
			{
				mini+=to_string(1);
				start=false;
				sum--;
			}
			else if(sum<(m-i-1)*9)
			{
				mini+=to_string(0);
			}
			else
			{
				mini+=to_string(sum-(m-i-1)*9);
				sum-=(sum-(m-i-1)*9);
			}
		}
		sum=s;
		for(int i=0;i<m;i++)
		{
			if(sum>=9)
			{
				maxi+=to_string(9);
				sum-=9;
			}
			else
			{
				maxi+=to_string(sum);
				sum=0;
			}
		}

	}
	cout<<mini<<" "<<maxi;
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

