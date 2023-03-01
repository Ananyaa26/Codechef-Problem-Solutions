#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,P,Q;
	    cin>>X>>P>>Q;
 	    cout<<(P-Q)*X<<endl;
	    T--;
	}
	return 0;
}
