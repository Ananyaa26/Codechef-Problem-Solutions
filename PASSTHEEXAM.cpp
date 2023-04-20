#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int A,B,C;
	    cin>>A>>B>>C;
	    if(A+B+C >= 100 && A>=10 && B>=10 && C>=10){
	        cout<<"PASS"<<endl;
	    }else{
	        cout<<"FAIL"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
