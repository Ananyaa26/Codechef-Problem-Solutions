#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int T;
	cin>>T;
	while(T>0){
	    int X;
	    cin>>X;
 
	    if(X>=7){
	        cout<<"HOT"<<endl;
	    }else if(X<4){
	        cout<<"MILD"<<endl;
	    }else{
	        cout<<"MEDIUM"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
