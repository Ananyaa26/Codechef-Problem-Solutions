#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int T;
	cin>>T;
	while(T>0){
	    int N,X;
	    cin>>N>>X;
 	    
 	    int grps = 0;
 	    if(N%6==0){
 	        grps = N/6;
 	    }else{
 	        grps = N/6+1;
 	    }
 	    cout<<grps*X<<endl;
	    T--;
	}
	return 0;
}
