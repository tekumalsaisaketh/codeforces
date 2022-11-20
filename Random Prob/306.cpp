#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;
using vi=vector<int>;
using vll=vector<long long>;

void solve()
{
	string s;
	cin>>s;
	string temp=s;
	int n=s.length();
	int a=0;
	int b=0;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='A'&&s[i+1]=='B')
		{
			s=s.substr(i+2);
			a=1;
			break;
		}
	}
	if(s.find("BA") != string::npos&&a)
	{
		cout<<"YES";
		return;
	} 
	s=temp; 
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='B'&&s[i+1]=='A')
		{
			s=s.substr(i+2);
			b=1;
			break;
		}
	}
	if(s.find("AB") != string::npos&&b) {
		cout<<"YES";
		return;
	}
	cout<<"NO";


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

