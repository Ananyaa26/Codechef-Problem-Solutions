#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,N;
	    cin>>X>>N;
	    cout<<(X/10)*N<<endl;
	    T--;
	}
	return 0;
}
