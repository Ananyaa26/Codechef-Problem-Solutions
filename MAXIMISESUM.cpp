#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> nums(n);
        vector<pair<long long, int>> mp; 

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            mp.push_back({nums[i], i});
        }

        sort(mp.rbegin(), mp.rend());

        long long val = nums[0];

        for (int i = 0; i < mp[0].second; i++) {
            val = max(val, nums[i]);
            nums[i] = val;
        }
        val = nums[n - 1];
        for (int i = n - 1; i > mp[0].second; i--) {
            val = max(val, nums[i]);
            nums[i] = val;
        }
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        cout << sum << endl;
    }
    return 0;
}
