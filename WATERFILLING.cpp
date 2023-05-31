#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    if((b1==0 && b2==0)||(b2==0 && b3==0)||(b3==0 && b1==0))
	    {
	        cout<<"Water filling time"<<endl;
	    }else{
	        cout<<"Not now"<<endl;
	    }
	    
	}
	return 0;
}
