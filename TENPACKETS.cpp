#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a = x*5;
	    int b = (x*3)+y;
	    int c = (y*2)+x;
	    
	    if(a<=b && a<=c){
	        cout<<a<<endl;
	    }else if(b<=c && b<=a ){
	        cout<<b<<endl;
	    }else if(c<=a && c<=b){
	        cout<<c<<endl;
	    }
	}
	return 0;
}
