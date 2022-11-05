#include<bits/stdc++.h>
using namespace std;
void solve();



void solve()
{
	long long a;
	int b,n;
	cin>>a>>b>>n;
	bool gotOne=false;
	if(a%b==0)
	{
		gotOne=true;
	} 
	if(!gotOne)
	{
		long long x=a;
		for(int i=0;i<=9;i++)
			{
				x=x*10+i;
				if(x%b==0)
				{
					gotOne=true;
					a=x;
					break;
				}
				x=a;
			}
		n--;
		
	}
	if(gotOne)
	{
		string x=to_string(a);
		while(n--)
		{
			x+='0';
		}
		cout<<x<<endl;
	}
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

