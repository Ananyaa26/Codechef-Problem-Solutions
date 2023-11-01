#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      vector<int> nums(n);
      for(int i=0;i<n;i++)
      {
          cin>>nums[i];
      }
      int count=0;
      
      for(int i=0;i<(n-k)+1;i++)
      {
          for(int j=i;j<i+k;j++)
          {
              if(nums[j]%2==1)
              {
                  count++;
                  break;
              }
          }
      }
      cout<<count<<endl;
  }
  return 0;
}