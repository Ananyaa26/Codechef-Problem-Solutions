#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
        int X,Y;
	    cin>>X>>Y;
	    int c1 = 2*X;
	    int c2 = 5*Y; 
	    if(c1>c2){
	        cout<<"Chocolate"<<endl;
	    }else if(c2>c1){
	        cout<<"Candy"<<endl;
	    }
	    else{
	        cout<<"Either"<<endl;
	    }
	}
	return 0;
}
