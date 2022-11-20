#include<bits/stdc++.h>
using namespace std;
void solve();

long long mod=100000000;

int getAll(int i,int n,int n1,int n2,int k1,int k2,int c1,int c2)
{		if(i==n) return 1;
		if(c1>k1||c2>k2) return 0;
		if(n1==0)
		{
			if(n2+c2<=k2) return 1;
			else return 0;
		}
		else if(n2==0)
		{
			if(n1+c1<=k1) return 1;
			else return 0;
		}
		int x=n1-1;
		int y=n2-1;
		return getAll(i+1,n,x,n2,k1,k2,c1++,0)+getAll(i+1,n,n1,y,k1,k2,0,c2++);
}

void solve()
{
	int n1,n2,k1,k2;
	cin>>n1>>n2>>k1>>k2;
	int n=n1+n2;
	cout<<getAll(0,n,n1,n2,k1,k2,0,0);

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

