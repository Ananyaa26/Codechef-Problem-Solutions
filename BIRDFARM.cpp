#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    if(Z%X!=0 && Z%Y==0){
	        cout<<"DUCK"<<endl;
	    }else if(Z%X==0 && Z%Y==0){
	        cout<<"ANY"<<endl;
	    }else if(Z%X!=0 && Z%Y !=0){
	        cout<<"NONE"<<endl;
	    }else if(Z%X ==0 && Z%Y !=0){
	        cout<<"CHICKEN"<<endl;
	    }
	}
	return 0;
}
