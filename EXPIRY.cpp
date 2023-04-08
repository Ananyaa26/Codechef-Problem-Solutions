#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,M,K;
	    cin>>N>>M>>K;
	    int q = M*K;
	    if(q>=N){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	        }
	}
	return 0;
}
