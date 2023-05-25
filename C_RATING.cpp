#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int diff =Y-X;
	    if(diff%8==0){
	        cout<<diff/8<<endl;
	    }else{
	        cout<<(diff/8)+1<<endl;
	    }
	}
	return 0;
}
