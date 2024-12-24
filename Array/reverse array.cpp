

#include <bits/stdc++.h>
using namespace std;


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
//o(n)
//o(1)
void ra(vector<int>&arr) {
    int st=0,ed = arr.size()-1;
    while (st< ed) {
        swap(arr[st],arr[ed]);
        st++;
        ed--;
    }
}
//o(n)
//o(1)

reverse(arr.begin(), arr.end())


int32_t main() {
    int n;
    cin >> n;
//tc=O(n)	
//sc=O(n)


   vector<int>arr(n);
   stack<int>temp;
   
   
   
   for(int i=0;i<n;i++)
    {cin>>arr[i];
     temp.push(arr[i]);
    }

    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }

}
