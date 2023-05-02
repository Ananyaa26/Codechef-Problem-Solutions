//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,reverse=0,r;
        cin>>n;
        while(n>0){
            r=n%10;
            reverse=reverse*10+r;
            n=n/10;
        }
        cout<<reverse<<endl;
    }
	return 0;
}

