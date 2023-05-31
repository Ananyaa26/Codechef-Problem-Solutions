#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    if(X<=3){
	        cout<<X*Y<<endl;
	    }else if(X>3 && X%3==0){
	        cout<<(X*Y)+(X/3-1)*Z<<endl;
	    }else{
	        cout<<(X*Y)+(X/3)*Z<<endl;
	    }
	}
	return 0;
}
