#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X;
	    cin>>X;
	    if(X > 100){
	        cout<<X-10<<endl;
	    }else{
	        cout<<X<<endl;
	    }
	    T--;
	}
	return 0;
}
