#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int X,Y,H;
	cin>>X>>Y>>H;
	if(H==1){
	    cout<<X<<endl;
	}else{
	    cout<<X + ((H-1)*Y)<<endl;
	}
	return 0;
}
