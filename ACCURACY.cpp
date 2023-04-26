#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if(X%3==0){
	        cout<<0<<endl;
	    }else if (X%3==1){
	        cout<<2<<endl;
	    }else if(X%3==2){
	        cout<<1<<endl;
	    }
	}
	return 0;
}
