#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    if(A>=B && A>=C){
	        cout<<A<<endl;
	    }else if (B>=A && B>=C){
	        cout<<B<<endl;
	    }else if (C>=A && C>=B){
	        cout<<C<<endl;
	    }
	   
	}
	return 0;
}
