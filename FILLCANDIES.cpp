#include <iostream>
using namespace std;

int main() {
    
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,K,M;
	    cin>>N>>K>>M;
	    int bag_cap = K*M;
	    if(N%bag_cap!=0){
	        cout<<(N/bag_cap)+1<<endl;
	    }else{
	        cout<<N/bag_cap<<endl;
	    }
	}
	return 0;
}
