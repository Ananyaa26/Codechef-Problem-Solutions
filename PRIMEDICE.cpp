#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B;
	    cin>>A>>B;
	    int sum = A+B;
	    if(sum == 2 || sum == 3 || sum == 5 || sum == 7 || sum==11){
	        cout<<"Alice"<<endl;
	    }else{
	        cout<<"BOB"<<endl;
	    }
	}
	return 0;
}
