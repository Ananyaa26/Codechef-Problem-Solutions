#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int X,Y,A;
	while(T>0){
	    cin>>X>>Y>>A;
	    if( X <=A && A< Y ){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    T--;
	}
	
	return 0;
}
