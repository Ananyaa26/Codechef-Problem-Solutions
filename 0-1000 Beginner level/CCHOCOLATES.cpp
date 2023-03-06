#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
 
	    cout<<(X*5 + Y*10)/Z<<endl;	    
	    T--;
	}
	return 0;
}
