#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int dis = 0.1*x;
	    cout<<max(100,dis)<<endl;
	}
	return 0;
}
