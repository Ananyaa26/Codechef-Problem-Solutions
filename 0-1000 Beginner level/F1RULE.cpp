#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y;
	    cin>>X>>Y;
        int limit = 1.07*X;
	    if(Y <= limit){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }	    
	    T--;
	}
	return 0;
}