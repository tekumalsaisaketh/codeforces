#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;
using vi=vector<int>;
using vll=vector<long long>;

int track[10][4];

void solve()
{
	int n;
	cin>>n;
	int t=0;
	int th=0;
	int f=0;
	int s=0;
	ll num;
	cin>>num;
	while(num>0)
	{
		int a=num%10;
		num=num/10;
		//cout<<a<<" ";
		if(a!=1||a!=0)
		{
			
			t+=track[a][0];
			th+=track[a][1];
			f+=track[a][2];
			s+=track[a][3];
		}
		//cout<<t<<' '<<th<<" "<<' '<<f<<" "<<' '<<s<<endl;
	}
		string ans="";
		while(s)
		{
			ans+='7';
			s--;
		}
		while(f)
		{
			ans+='5';
			f--;
		}
		while(th)
		{
			ans+='3';
			th--;
		}
		while(t)
		{
			ans+='2';
			t--;
		}
		cout<<ans;
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
	memset(track,0,sizeof(track));
	for(int i=2;i<=9;i++)
	{
		if(i==2)
		{
			track[i][0]=1;
		}
		if(i==3)
		{
			track[i][1]=1;
		}
		if(i==4)
		{
			track[i][0]=2;
			track[i][1]=1;
		}
		if(i==5)
		{
			track[i][2]=1;
		}
		if(i==6)
		{
			track[i][1]=1;
			track[i][2]=1;
		}
		if(i==7)
		{
			track[i][3]=1;
		}
		if(i==8)
		{
			track[i][0]=3;
			track[i][3]=1;
		}
		if(i==9)
		{
			track[i][0]=1;
			track[i][1]=2;
			track[i][3]=1;
		}
	}
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

