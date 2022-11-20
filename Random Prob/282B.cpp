#include<bits/stdc++.h>
using namespace std;
void solve();


string getIt(int i,vector<int>&v,int diff,string ans)
{
	if(i==v.size())
	{
		if(abs(diff)<=500) return ans;
		else return "";
	}
	string s=getIt(i+1,v,v[i]+diff,ans+'A');
	if(s!="") return s;
	string j=getIt(i+1,v,diff-(1000-v[i]),ans+'G');
	if(j!="") return j;
	return "";
}

void solve()
{
	int n;
	cin>>n;
	int curr=0;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(a);
	}
	string ans=getIt(0,v,0,"");
	if(ans!="") cout<<ans<<" ";
	else cout<<-1<<endl;



}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
/*is Single Test case?*///cin>>t;
while(t--)
{
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

