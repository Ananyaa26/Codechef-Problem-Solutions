#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
 
	    if((X+Y==Z)||(Y+Z==X)||(X+Z==Y)){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
