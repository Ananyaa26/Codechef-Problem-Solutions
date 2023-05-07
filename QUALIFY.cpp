#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,A,B;
	    cin>>X>>A>>B;
	    int score = A+(2*B);
	    if(score>=X){
	        cout<<"Qualify"<<endl;
	    }else{
	        cout<<"NOTQUALIFY"<<endl;
	    }
	}
	return 0;
}
