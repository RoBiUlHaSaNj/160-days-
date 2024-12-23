

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

   //total complexcity nlogn
      //sort(arr.begin(),arr.end());  //(nlogn)


           //1 way
        // cout << arr[n - 2] << endl;

         //2 way
     // for (int i = n - 2; i > n - 3; i--)   //n
      //  cout<<arr[i]<<endl;




}


int32_t main()
{
//TC o(n)
// 3rd largest  value
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
   int lar =INT_MIN,second = INT_MIN,secondd = INT_MIN;
   for(int i=0;i<n;i++)   //o(n)
   {
       if(arr[i]>lar)
        {

       // secondd = second;
        second = lar;
        lar= arr[i];

        }
        else if(arr[i]>second && arr[i]!=lar)
        {
           // secondd = second;
           second = arr[i];
        }

       // else if(arr[i]>secondd && arr[i]!=lar && arr[i]!=second )
      //  secondd = arr[i];



   }
   // cout<<secondd <<endl;

 cout<<second <<endl;




}
