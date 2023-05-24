#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n>>k;

        if (n==1){
            cout<<"NO" <<endl;
        }
        else {
            long long temp=0 ;
            if (n%4==0 || (n+1)%4==0){
                temp=1;
            }
            if (temp==1 && k%2==0 && k<=n/2){
                cout<<"YES" <<endl ;
            }
            else if (temp==0 && k%2!=0 && k<=n/2){
                cout<<"YES" <<endl ;
            }
            else {
                cout<<"NO" <<endl ;
            }
        }
    }
	return 0;
}
