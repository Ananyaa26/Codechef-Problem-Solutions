#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int water_req = Y*2;
	    int peeps = X/water_req;
	    cout<<peeps<<endl;
	}
	return 0;
}
