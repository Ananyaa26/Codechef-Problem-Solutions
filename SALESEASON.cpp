#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if(X<=100){
	        cout<<X<<endl;
	    }else if(X> 100 && X<=1000){
	        cout<<X-25<<endl;
	    }else if(X > 1000 && X <= 5000){
	        cout<<X-100<<endl;
	    }else if(X>5000){
	        cout<<X-500<<endl;
	    }
	}
	return 0;
}
