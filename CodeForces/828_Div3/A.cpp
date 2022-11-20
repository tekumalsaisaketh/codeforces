#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;
using vi=vector<int>;


void solve()
{
	int n;
	cin>>n;
	vi v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	string s;
	cin>>s;
	unordered_map<int,char>m;
	for(int i=0;i<n;i++)
	{
		if(m.find(v[i])!=m.end())
		{
			if(m[v[i]]!=s[i]) 
			{
				cout<<"NO";
				return;
			}
		}
		else
		{
			m[v[i]]=s[i];
		}
	}
	cout<<"YES";

}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
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

