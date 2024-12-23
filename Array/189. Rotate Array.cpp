

#include <bits/stdc++.h>
using namespace std;
//#define ajira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

const int N   = (int) 2e5 + 5;
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 9;

#define nl      '\n'
#define ff      first
#define ss      second
#define szof(x) (int) x.size()
#define all(x)  x.begin(), x.end()
#define int long long

void permutation_f() {


}


int32_t main()
{
 //o(n)
    int n,k; cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    k = k % n;
    rotate(arr.rbegin(), arr.rbegin() + k,arr.rend());

     for (int num :arr) {
        cout << num << " ";
    }
    cout << endl;





}
