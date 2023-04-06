#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y;
	    cin>>X>>Y;
 
	    if(X*100>=Y*10){
	        cout<<"CLOTH"<<endl;
	    }else{
	        cout<<"DISPOSABLE"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
