#include<bits/stdc++.h>
using namespace std;
void solve();
using ll = long long;


void solve()
{
    ll q;
    cin>>q;
    ll ma=1;
    ll na=1;
    char sa='a';
    char la='a';
    char sb='a';
    char lb='a';

    for(ll i=0;i<q;i++)
    {
        ll n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        if(n==1) ma+=(m*x.length());
        else na+=(m*x.length());
        for(auto s:x)
        {
            if(n==1)
            {
                
                if(la<s)
                {
                    la=s;
                }
            }
            else{
                
                if(lb<s)
                {
                    lb=s;
                }
            }
        }
        if(lb>sa) cout<<"YES"<<endl;
        else if(lb==la)
        {
            if(ma<na) cout<<"YES"<<endl;
            else if(ma==na) cout<<"NO"<<endl;
            else cout<<"NO"<<endl;
            
        }
        else cout<<"NO"<<endl;

    }

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

