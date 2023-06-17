#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int a = 500-(X*2);
	    int b = 1000-((Y+X)*4);
	    int ans1 = a+b;
	    
	    int p = 500-((X+Y)*2);
	    int q = 1000-(Y*4);
	    int ans2 = p+q;
	    
	    if(ans1>ans2){
	        cout<<ans1<<endl;
	    }else if(ans1<=ans2){
	        cout<<ans2<<endl;
	    }
	}
	return 0;
}
