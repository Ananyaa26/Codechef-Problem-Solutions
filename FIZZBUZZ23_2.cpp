#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, D;
        cin >> N >> X >> D;

        int a = 5*X;
        int b = N/a;
        cout<< b+D<<endl;
    }

    return 0;
}

  