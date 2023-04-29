#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float val = s+((c*s)/100);
	    if(val<=b && val>=a){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
