#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<y && x<z){
	        cout<<"ALICE"<<endl;
	    }
	    else if(y<x && y<z){
	        cout<<"BOB"<<endl;
	    }
	    else{
	        cout<<"CHARLIE"<<endl;
	    }
	}
	return 0;
}
