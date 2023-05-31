#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int T;
    cin >> T;
    while (T--) {
        int W,L;
        cin>>W>>L;

        if(W*L %2 !=0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
	return 0;
}
