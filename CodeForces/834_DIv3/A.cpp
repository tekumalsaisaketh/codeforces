#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;

string maxS="";
void solve()
{
	string s;
	cin>>s;
	if(maxS.find(s)!=string::npos)
	{
		cout<<"YES";
	}
	else cout<<"NO";

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
for(int i=0;i<17;i++)
{
	maxS+="Yes";
}
while(t--)
{
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

