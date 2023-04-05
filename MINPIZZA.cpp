#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    if(N*X%4 !=0){
	        cout<<((N*X)/4)+1<<endl;
	    }else{
	        cout<<((N*X)/4)<<endl;
	    }
	}
	return 0;
}
