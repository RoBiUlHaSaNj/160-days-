https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3671

#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;


//const int mod = 5;

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
        int b,e,nn;cin>>b>>e>>nn;
        int ans =mod_exp(b,e,nn);

      //  int ans =mod_exp(b,e,10);  if i need  last digit 
        cout<<ans<<endl;
    }
}
