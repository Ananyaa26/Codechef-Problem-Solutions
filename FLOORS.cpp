#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int f1,f2;
	    if(X%10==0){
	        f1=X/10;
	    }else{
	        f1=X/10 +1;
	    }
	    if(Y%10==0){
	        f2=Y/10;
	    }else{
	        f2=Y/10 +1;
	    }
	    cout<<abs(f1-f2)<<endl;
	}
	return 0;
}
