#include <bits/stdc++.h>
using namespace std;


void reverseArray(vector<int> &arr) {
    //tc=o(n)
    //sc=o(1)
    int n = arr.size();
    
    int left = 0, right = n - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main()
{
//tc o(n)
//sc o(n)
    int n; cin>>n;
    vector<int>arr(n);
    stack<int>a;
    for(int i =0;i<n;i++)
      {
          cin>>arr[i];
        a.push(arr[i]);
      }

      while(!a.empty())
      {
          cout<<a.top()<<" ";
          a.pop();

      }


}
