#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>=1 && x<=50){
	        cout<<"LEFT"<<endl;
	    }else{
	        cout<<"Right"<<endl;
	    }
	}
	return 0;
}
