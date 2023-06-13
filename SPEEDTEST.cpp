#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    float A,X,B,Y;
	    cin>>A>>X>>B>>Y;
	    float s1 = A/X;
	    float s2= B/Y;
	    
	    if(s1>s2){
	        cout<<"Alice"<<endl;
	    }else if( s1<s2){
	        cout<<"Bob"<<endl;
	    }else if(s1==s2){
	        cout<<"EquAL"<<endl;
	    }
	}
	return 0;
}
