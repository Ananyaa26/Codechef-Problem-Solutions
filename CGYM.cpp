#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
        if(X>Z){
           cout<<0<<endl; 
        }else if(X<=Z && X+Y>Z){
            cout<<1<<endl;
        }else if (X+Y<=Z){
            cout<<2<<endl;
        }
	}
	return 0;
}
