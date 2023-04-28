#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long long x,y;
	    cin>>x>>y;
	    long long p = (x*x*x*x)+(4*y*y);
	    long long q = 4*y*x*x;
	    if(p==q){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
