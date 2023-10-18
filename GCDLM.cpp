#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int T;
    cin>>T;
    while(T--){
        int X, Y, K;
        cin >> X >> Y >> K;
    
        if (K % 2 == 0) {
            cout << max(X, Y) << endl;
        } else {
            cout << gcd(X, Y) * 2 << endl;
        }
    }
    return 0;
}
