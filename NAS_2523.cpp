#include <iostream>
#include <vector>
using namespace std;

void func(int N) {
    if (N%2!=0) {
        cout<<-1<<endl;
        return;
    }

    vector<int>vec(N);
    int odd=N;
    int even=N-1;

    for(int i=0;i<N;i+=2) {
        vec[i]=odd;
        odd-=2;
    }

    for(int i=1;i<N;i+=2) {
        vec[i]=even;
        even-=2;
    }

    for(int i=0;i<N;i++) {
        cout<<vec[i]<<" ";
    }
    cout << endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        func(n);
    }

    return 0;
}
