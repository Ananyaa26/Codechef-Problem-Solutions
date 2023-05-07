#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if(N%4==0){
	        cout<<"Good"<<endl;
	    }else{
	        cout<<"Not GOOD"<<endl;
	    }
	}
	return 0;
}
