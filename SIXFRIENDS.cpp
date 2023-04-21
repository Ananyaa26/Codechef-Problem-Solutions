#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y;
	    cin>>X>>Y;
 
	    if(3*X<2*Y){
	        cout<<3*X<<endl;
	    }else{
	        cout<<2*Y<<endl;
	    }	    
	    T--;
	}
	return 0;
}
