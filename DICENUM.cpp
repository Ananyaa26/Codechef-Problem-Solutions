#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<int>a(3),b(3);

        cin>>a[0]>>a[1]>>a[2];

        cin>>b[0]>>b[1]>>b[2];

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        int a1 = a[0]*100 + a[1]*10 + a[2];
        int b1 = b[0]*100 + b[1]*10 + b[2];

        if (a1 > b1) {
            cout << "Alice" << endl;
        } else if (b1 > a1) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}