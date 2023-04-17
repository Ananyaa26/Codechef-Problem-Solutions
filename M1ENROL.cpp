#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	   int X,Y;
	    cin>>X>>Y;
	    if(Y>X){
	        cout<<Y-X<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	    T--;
    }
	return 0;
}
