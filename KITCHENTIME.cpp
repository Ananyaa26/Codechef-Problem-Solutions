#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y;
	    cin>>X>>Y;
	    cout<<abs(X-Y)<<endl;
	    T--;
	}
	return 0;
}
