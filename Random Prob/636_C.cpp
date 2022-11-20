#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
	int n;
	cin>>n;
	vector<ll>v(n);
	int maxP=0;
	int pos=true;
	int neg=true;
	int maxN=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(neg&&v[i]<0)
		{
			neg=false;
		}
		if(!neg&&v[i]>0)
		{
			neg=true;
			maxN+=2;
		}
		if(pos&&v[i]>0)
		{
			pos=false;
		}
		if(!pos&&v[i]<0)
		{
			pos=true;
			maxP+=2;
		}
	}
	if(!neg) maxN++;
	if(!pos) maxP++;
	//cout<<maxN<<" "<<maxP<<endl;
	if(max(maxP,maxN)==1)
	{
		cout<<*max_element(v.begin(), v.end());
		return;
	}
	ll ans1=LLONG_MIN;
	if(maxN>=maxP)
	{
		ll maxi=LLONG_MIN;
		neg=true;
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			if(!neg&&v[i]<0||(neg&&v[i]>0))
			{
				if(maxi<v[i]) maxi=v[i];
				
			}
			else
			{
				if(maxi!=LLONG_MIN) 
				{
					ans+=maxi;
				}
				maxi=v[i];
				neg=!neg;
			}
		}
		if(neg)
		{
			ans+=maxi;
		}
		if(ans>ans1) ans1=ans;
	}
	if(maxP>=maxN)
	{
		ll maxi=LLONG_MIN;
		neg=true;
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			if(neg&&v[i]<0||(!neg&&v[i]>0))
			{
				if(maxi<v[i]) maxi=v[i];
				
			}
			else
			{
				if(maxi!=LLONG_MIN) 
				{
					ans+=maxi;
				}
				maxi=v[i];
				neg=!neg;
			}
		}
		if(neg)
		{
			ans+=maxi;
		}
	if(ans>ans1) ans1=ans;
	}
	cout<<ans1;
		
	

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

