#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    float X,Y;
	    cin>>X>>Y;
	    if(Y >= X/2){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
