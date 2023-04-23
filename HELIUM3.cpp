#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B,X,Y;
	    cin>>A>>B>>X>>Y;
	    
	    int target = A*B;
	    int output = X*Y;
	    
	    if(output>=target){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
