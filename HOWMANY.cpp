#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n<10){
	    cout<<1<<endl;
	}else if(n>9 && n<100){
	    cout<<2<<endl;
	}else if(n>99 && n<1000){
	    cout<<3<<endl;
	}else{
	    cout<<"More than 3 digits"<<endl;
	}
	return 0;
}
