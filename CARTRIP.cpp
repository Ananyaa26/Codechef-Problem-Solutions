#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X;
	    cin>>X;
 
	    if(X<300){
	        cout<<3000<<endl;
	    }else{
	        cout<<X*10<<endl;
	    }	    
	    T--;
	}
	return 0;
}
