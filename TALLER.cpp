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
	        cout<<"A"<<endl;
	    }else{
	        cout<<"B"<<endl;
	    }
	    T--;
	}
	return 0;
}
