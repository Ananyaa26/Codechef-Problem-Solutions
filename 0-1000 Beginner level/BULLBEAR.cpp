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
	        cout<<"Loss"<<endl;
	    }else if(X<Y){
	        cout<<"Profit"<<endl;
	    }else if(X == Y){
	        cout<<"NEUTRAL"<<endl;
	    }
	   
	}
	return 0;
}
