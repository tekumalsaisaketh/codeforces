#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	stack<int>st;
	int n;
	char q;
	cin>>n>>q;
	string s;
	cin>>s;
	if(q=='g')
	{
		cout<<0;
		return;
	}
	int firstG=-1;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(firstG==-1&&s[i]=='g') firstG=i;
		if(st.empty())
		{
			if(s[i]==q)
			{
				st.push(i);
			}
		}
		else
		{
			if(s[i]=='g')
			{
				maxi=max(maxi,i-st.top());
				st.pop();
			}
		}
	}
	if(!st.empty())
	{
		maxi=max(maxi,n+firstG-st.top());
		st.pop();
	}
	cout<<maxi;

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

