#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X;
	    cin>>X;
        X=X%10;
	    cout<<X<<endl;	    
	    T--;
	}
	return 0;
}
