#include<bits/stdc++.h>
using namespace std;
void solve();



void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b==c) cout<<"YES";
	else if(b+c==a) cout<<"YES";
	else if(a+c==b) cout<<"YES";
	else cout<<"NO";
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

