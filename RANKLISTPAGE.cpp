#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%25!=0){
	        cout<<(x/25) +1<<endl;
	    }else{
	        cout<<x/25<<endl;
	    }
	}
	return 0;
}
