#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    int jar = X/Y;
	    if(X%Y==0){
    	    cout<<Z*jar<<endl;
	    }else if(X<Y){
	        cout<<Z<<endl;
	    }else if(X%Y>0){
	        cout<<Z*(jar+1)<<endl;
	    }
	}
	return 0;
}
