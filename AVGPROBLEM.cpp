#include <iostream>
using namespace std;

int main() {
	// your code goes here	
	int T;
	cin>>T;
	while(T>0){
	    float X,Y,Z;
	    cin>>X>>Y>>Z;
        float avg = (X+Y)/2;
	    if( avg > Z){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
