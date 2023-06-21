#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if(N%10 ==0){
	        cout<<N/10<<endl;
	    }else{
	        cout<<(N/10)+1<<endl;
	    }
	}
	return 0;
}
