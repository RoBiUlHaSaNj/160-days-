#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;


const int mod = 1e9 + 7;

ll mod_exp(ll base ,int exp,int mod)
{
    ll ans =1;
    while(exp>0)
    {
        if(exp%2==1)
        ans=(ans*base)%mod;
        base =(base*base)%mod;
        exp/=2;

    }
    return ans;

}
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int b,e;cin>>b>>e;
        int ans =mod_exp(b,e,mod);
        cout<<ans<<endl;
    }
}
