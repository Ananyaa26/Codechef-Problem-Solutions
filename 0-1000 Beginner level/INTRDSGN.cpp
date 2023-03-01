#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X1,Y1,X2,Y2;
	    cin>>X1>>Y1>>X2>>Y2;
        int a = X1+Y1;
        int b = X2+Y2;
	    if(a<b){
	        cout<<a<<endl;
	    }else{
	        cout<<b<<endl;
	    }	    
	    T--;
	}
	return 0;
}
