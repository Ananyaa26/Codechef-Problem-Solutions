#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int first = max(a,b);
	    int second = max(c,d);
	    
	    cout<<first+second<<endl;
	}
	return 0;
}
