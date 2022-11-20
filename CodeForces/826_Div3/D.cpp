#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;

ll getOn(ll l,ll r,ll min,ll max,vector<ll>&v)
{
	//cout<<v[l]<<" "<<min<<" "<<v[r]<<" "<<max<<endl;
	if(r-l==1)
	{
		//cout<<v[l]<<" "<<min<<" "<<v[r]<<" "<<max<<endl;
		if(v[l]==min&&v[r]==max)
		{
			//cout<<min<<" "<<max<<endl;
			return 0;
		} 
		else if(v[l]==max&&v[r]==min)
		{
			//cout<<min<<" "<<max<<endl;
			return 1;
		} 
		else return -1;
	}

	ll mid=(l+r)/2;
	ll midMax=(min+max)/2;
	//cout<<mid<<" "<<midMax;	
	ll a,b;
	if(v[l]<=midMax)
	{
		a=getOn(l,mid,min,midMax,v);
		b=getOn(mid+1,r,midMax+1,max,v);

	}
	else
	{
		a=getOn(l,mid,midMax+1,max,v);
		b=getOn(mid+1,r,min,midMax,v);
	}
	//cout<<a<<" "<<b<<" ";
	if(a!=-1&&b!=-1)
	{
		if(v[l]>v[mid+1]) return a+b+1;
		else return a+b;
	} 
	else return -1;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
void solve()
{
	ll p;
	cin>>p;
	vector<ll>v;
	if(!isPowerOfTwo(p))
	{
		cout<<-1;
		return;
	} 
	unordered_map<ll,bool>m;
	for(ll i=0;i<p;i++)
	{
		ll a;
		cin>>a;
		if(m.find(a)!=m.end()||a>p) 
		{
			cout<<-1;
			return;
		}
		m[a]=true;
		v.push_back(a);
	}
	if(p==1)
	{
		cout<<0;
		return;
	} 
	ll ans=getOn(0,p-1,1,p,v);
	cout<<ans<<" ";
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

