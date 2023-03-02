#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int N,M,X;
	    cin>>N>>M>>X;
	    cout<<X*(N+M)*2<<endl;
	    T--;
	}
	return 0;
}
