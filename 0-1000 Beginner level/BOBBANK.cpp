#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int W,X,Y,Z;
	    cin>>W>>X>>Y>>Z;
	    int balance = W+((X-Y)*Z);
        cout<<balance<<endl;
	    T--;
	}
	return 0;
}