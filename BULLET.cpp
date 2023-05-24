#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    int tt = Y/X;
	    int ans = Z-tt;
	    if(ans <=0){
	        cout<<0<<endl;
	    }else{
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
