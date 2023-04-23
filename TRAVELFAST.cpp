#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X>Y){
	        cout<<"car"<<endl;
	    }else if (X<Y){
	        cout<<"Bike"<<endl;
	    }else if (X==Y){
	        cout<<"Same"<<endl;
	    }
	}
	return 0;
}
