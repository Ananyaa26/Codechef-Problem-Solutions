#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int c = a+b+(a*b);
	if(c==111){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
	return 0;
}
