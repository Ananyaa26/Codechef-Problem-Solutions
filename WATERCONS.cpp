#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int X;
	while(T>0){
	    cin>>X;
	    if(X>=2000){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    T--;
	}
	return 0;
}
