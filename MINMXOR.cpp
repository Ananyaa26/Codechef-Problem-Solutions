#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> nums(n);

        for (int i=0;i<n;i++){
            cin>>nums[i];
        }
            
        if (n < 2) {
            cout <<-1<<endl;
        }
    
        int val = 0;
        for (int num : nums) {
            val ^= num;
        }
    
        int ans = val;
        for (int num : nums) {
            int res = val ^ num;
            ans = min(ans, res);
        }
    
        for (int num : nums) {
            int res = val ^ num;
            ans = min(ans, res);
        }
        
        cout<<ans<<endl;
    }
    
}