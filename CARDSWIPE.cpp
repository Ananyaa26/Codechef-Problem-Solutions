#include <iostream>
#include <vector>
using namespace std;

int maximum(vector<int>& arr) {
    int n = arr.size();
    vector<int> cnt(n + 1, 0);
    int maxi = 0;
    int current = 0;
   int z=0;
    for (int i = 0; i < n; i++) {
        int k=0;
        if (arr[i] <= n) {
            if (cnt[arr[i]] == 0) {
                current++;
                cnt[arr[i]] = 1;
            } else {
                current--;
                cnt[arr[i]] = 0;
            }
            maxi = max(maxi, current);
        }
    }

    return maxi;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int max = maximum(arr);
        cout << max << endl;
    }

    return 0;
}
