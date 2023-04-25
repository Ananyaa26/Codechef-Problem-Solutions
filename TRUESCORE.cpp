#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a, b;
	    cin>>a>>b;
	    int c , d;
	    cin>>c>>d;
	    if(a<=c && b<=d){
	        cout<<"Possible"<<endl;
	    }else{
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}
	return 0;
}
