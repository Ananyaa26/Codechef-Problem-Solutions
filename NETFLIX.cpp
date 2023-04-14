#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y,Z,A;
	    cin>>X>>Y>>Z>>A;
 
	    if((A<=Y+Z )|| (A<=Z+X)||(A<=X+Y)){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
