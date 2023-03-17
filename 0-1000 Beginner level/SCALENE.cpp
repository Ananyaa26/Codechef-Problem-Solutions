#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int A,B,C;
	    cin>>A>>B>>C;
 
	    if((A != B) && (B!=C) && (C!=A) && ((A+B>C)||(B+C>A)||(C+A>B)))
	    {
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }	    
	    T--;
	}
	return 0;
}
