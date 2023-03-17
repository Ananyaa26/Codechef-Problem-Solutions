#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y;
	    cin>>X>>Y;
 
	    if(X >= Y){
	        cout<<Y*1<<endl;
	    }else{
	        cout<<(X*1)+(Y-X)*2<<endl;
	    }	    
	    T--;
	}
	return 0;
}
