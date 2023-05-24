#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if(X%3==1){
	        cout<<"HUGE"<<endl;
	    }else if(X%3==2){
	        cout<<"Small"<<endl;
	    }else if(X%3==0){
	        cout<<"Normal"<<endl;
	    }
	}
	return 0;
}
