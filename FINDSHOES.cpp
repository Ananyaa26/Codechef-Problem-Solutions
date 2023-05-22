#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,M;
	    cin>>N>>M;
	    if(N<M){
	        cout<<N<<endl;
	    }else if(N>M){
	        cout<<M+(N-M)*2<<endl;
	    }else if(N==M){
	        cout<<M<<endl;
	    }
	}
	return 0;
}
