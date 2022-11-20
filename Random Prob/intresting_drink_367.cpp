#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	string s,t;
	cin>>s>>t;
	int n=s.length();
	int m=t.length();
	if(s[n-1]=='L')
	{
		if(t[m-1]=='S'||t[m-1]=='M') cout<<">"<<endl;
		else{
			if(n>m) cout<<'>'<<endl;
			else if(n==m) cout<<'='<<endl;
			else cout<<'<'<<endl;
		}
	}
	if(s[n-1]=='M')
	{
		if(t[m-1]=='L') cout<<"<"<<endl;
		else if(t[m-1]=='S') cout<<">"<<endl;
		else cout<<'='<<endl;
	}
	if(s[n-1]=='S')
	{
		if(t[m-1]=='L'||t[m-1]=='M') cout<<"<"<<endl;
		else{
			if(n>m) cout<<'<'<<endl;
			else if(n==m) cout<<'='<<endl;
			else cout<<'>'<<endl;
		}
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
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

