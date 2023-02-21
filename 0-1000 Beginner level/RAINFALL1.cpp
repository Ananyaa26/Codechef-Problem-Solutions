#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if(X<3){
	        cout<<"LIGHT"<<endl;
	    }
	    else if (X>=3 && X<7)
	    {
	        cout<<"Moderate"<<endl;
	    }
	    else if (X >=7 && X<=20)
	    {
	        cout<<"Heavy"<<endl;
	    }
	    
	}
	return 0;
}
