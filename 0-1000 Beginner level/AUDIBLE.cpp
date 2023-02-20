#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X;
	    cin>>X;
	    if(X >= 67 && X <=45000){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	    T--;
	}
	return 0;
}
