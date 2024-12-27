
#include <bits/stdc++.h>
using namespace std;
void pushZerosToEnd(vector<int> &arr) {
    //use  for move any number in left or right for right ==
    stable_partition(arr.begin(), arr.end(), [](int n) {return n != 0; });
}
void faltu(vector<int>&arr)
{
     int idx=0;
    int n =arr.size();
    for(int i =0;i<n;i++)
   {
       if(arr[i]!=0)
       {
           arr[idx]=arr[i];
           idx++;

       }
   }
   while(idx<n)
    {arr[idx]=0;
   idx++;
}
}

int main() {

   int n; cin>>n;
   vector<int>arr(n);
   for(int i =0;i<n;i++)
    cin>>arr[i];
    faltu(arr);
    for(auto it: arr) cout<<it<<" ";




}
