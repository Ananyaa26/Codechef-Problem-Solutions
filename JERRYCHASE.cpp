#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T>0){
        int X,Y;
	    cin>>X>>Y;
	    if(Y>X){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    T--;
	}
	return 0;
}
