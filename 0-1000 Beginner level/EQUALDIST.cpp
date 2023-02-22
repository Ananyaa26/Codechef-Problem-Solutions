#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y;
	    cin>>X>>Y;
	    if((X+Y)%2 == 0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    T--;
	}
	return 0;
}
