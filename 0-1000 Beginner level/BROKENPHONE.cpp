#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y;
	    cin>>X>>Y;
 
	    if(X>Y){
	        cout<<"New Phone"<<endl;
	    }else if(X<Y){
	        cout<<"Repair"<<endl;
	    }else if(X == Y){
	        cout<<"ANY"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
