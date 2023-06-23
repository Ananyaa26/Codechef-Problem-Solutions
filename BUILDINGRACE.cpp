#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    float min1=a/x;
	    float min2=b/y;
	    if(min1 > min2){
	        cout<<"Chefina"<<endl;
	    }
	    else if(min1==min2){
	        cout<<"Both"<<endl;
	    }
	    else {
	        cout<<"Chef"<<endl;
	    }
    }
return 0;
}
