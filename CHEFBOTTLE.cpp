#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,X,K;
	    cin>>N>>X>>K;
	    int s = K/X;
	    if(s<=N){
	        cout<<s<<endl;
	    }else{
	        cout<<N<<endl;
	    }
	}
	return 0;
}
