#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int A,B,C,D,E;
	    cin>>A>>B>>C>>D>>E;
	    int ans = abs(C-A)+abs(D-B);
	    if (E>=ans && (E-ans)%2==0){
	        cout << "YES\n";
	    } 
	    else{
	        cout << "NO\n";
	    }
	}
	return 0;
}
