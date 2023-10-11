#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int val = X/Y;
	    if (val>20){
	        cout<<20<<endl;
	    }else{
	        cout<<val<<endl;
	    }
	}
	return 0;
}
