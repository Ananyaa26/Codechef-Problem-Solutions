#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,c;
	    cin>>a>>c;
	    int bs = a+c;
	    if(bs%2==0){
	        cout<<bs/2<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
