#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    int avail_space=s-x-y;
	    if(avail_space >=z){
	        cout<<0<<endl;
	    }else if(avail_space<z){
	        if(avail_space+x>=z || avail_space+y>=z){
	            cout<<1<<endl;
	        }else if(avail_space+x+y>=z){
	            cout<<2<<endl;
	        }
	    }
	        
	}
	return 0;
}
