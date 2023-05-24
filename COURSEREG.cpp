#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int N,M,K;
	    cin>>N>>M>>K;
	    if(M-K>=N){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
