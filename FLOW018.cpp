#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n ;
	    cin>>n;
	    int count = 1;
	    for(int i = 1;i <=n;i++){
	        count=count*i;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
