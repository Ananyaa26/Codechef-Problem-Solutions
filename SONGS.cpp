#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int N,X;
	    cin>>N>>X;
	    int Y = X*3;
	    int ans = N/Y;
	    cout<<ans<<endl;
	    T--;
	}
	return 0;
}
