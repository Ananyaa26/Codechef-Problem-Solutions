#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int W,X,Y,Z;
	    cin>>W>>X>>Y>>Z;
        int water_level = W+(Y*Z);
	    if(water_level > X){
	        cout<<"overflow"<<endl;
	    }else if (water_level<X){
	        cout<<"unfilled"<<endl;
	    }else if (water_level==X){
	        cout<<"Filled"<<endl;
	    }	    
	    T--;
	}
	return 0;
}