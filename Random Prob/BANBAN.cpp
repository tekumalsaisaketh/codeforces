#include<bits/stdc++.h>
using namespace std;
void solve();



void solve()
{
	int n;
	cin>>n;
	string s1="BNN";
	string s2="BAA";
	string s3="BNA";
	string s;
	string ori;
	for(int i=1;i<=n;i++)
	{
		int x=(n+1)/2;
		if(n%2==0)
		{
			if(i<=x)
			{
				s+=s1;
			}
			else s+=s2;
		}
		else
		{
			if(i<x)
			{
				s+=s1;
			}
			else if(i==x) s+=s3;
			else s+=s2;
		}
		ori+="BAN";
	}
	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<s.length();i++)
	{
		if(ori[i]=='A'&&s[i]=='N')
		{
			v1.push_back(i+1);
		}
		if(ori[i]=='N'&&s[i]=='A')
		{
			v2.push_back(i+1);
		}
	}
	cout<<(n+1)/2<<endl;
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" "<<v2[i]<<" ";
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

