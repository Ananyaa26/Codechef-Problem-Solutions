#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=4){
	        cout<<n<<endl;
	    }else{
            cout<<(n%5)+(n/5)*4<<endl;	    
	        
	    }
	}
	return 0;
}
