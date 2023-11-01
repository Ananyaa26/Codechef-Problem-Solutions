#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,K;
        cin>>n>>K;
        
        vector<int>nums(n);
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        
        int count = 0;
        int n = nums.size();
    
        for (int i = 0; i <= n - K; i++) {
            int bitwiseORResult = nums[i];
            for (int j = 1; j < K; j++) {
                bitwiseORResult |= nums[i + j];
            }
    
            if (bitwiseORResult % 2 == 1) {
                count++;
            }
        }

        cout<<count<<endl;
        
    }
}