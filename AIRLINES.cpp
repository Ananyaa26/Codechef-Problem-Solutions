#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
 
	    if(Y>X*10){
	        cout<<X*Z*10<<endl;
	    }else{
	        cout<<Y*Z<<endl;
	    }	    
	    T--;
	}
	return 0;
}
