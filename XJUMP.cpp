#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    int move = (X/Y)+(X%Y);
	    cout<<move<<endl;
	}
	return 0;
}
