#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X1,Y1,X2,Y2;
	    cin>>X1>>Y1>>X2>>Y2;
	    int a = abs(X1-X2);
	    int b = abs(Y1-Y2);
	    cout<<max(a,b)<<endl;
	}
	return 0;
}
