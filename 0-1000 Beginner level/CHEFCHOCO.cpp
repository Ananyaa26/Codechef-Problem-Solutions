#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int C,X,Y;
	    cin>>C>>X>>Y;
 	    cout<<Y*(C-X)<<endl;
	    T--;
	}
	return 0;
}