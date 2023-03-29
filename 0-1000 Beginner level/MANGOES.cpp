#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    int ans = (Z-Y)/X;
	    cout<<ans<<endl;
	    T--;
	}
	return 0;
}