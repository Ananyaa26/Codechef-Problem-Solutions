#include <iostream>
#include <set>
using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--) 
    {
    int X=0;
    int Y;
    cin >> Y;
    set<int> s; // using a set to store distinct values of X
    s.insert(X);
    for (int i = 1; i <= Y; i++) {
        set<int> new_s;
        for (auto j : s) {
            new_s.insert(j + 2);
            new_s.insert(j - 1);
        }
        s=new_s; // updating the set with new values of X
    }
    cout << s.size()+1 << endl; // output the number of distinct values of X
    }

    return 0;
}