#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int A,B,C,D;
	    cin>>A>>B>>C>>D;
            int Tv1 = A-C;
            int Tv2 = B-D;
	    if(Tv1 > Tv2){
	        cout<<"Second"<<endl;
	    }else if(Tv1 < Tv2){
	        cout<<"First"<<endl;
	    }else if(Tv1 == Tv2){
	        cout<<"Any"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
