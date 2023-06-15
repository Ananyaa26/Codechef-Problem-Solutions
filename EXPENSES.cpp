#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    int amt = pow(2,X);
	    for(int i=1;i<=N;i++){
	        amt = amt-(amt/2);
	    }
	    cout<<amt<<endl;
	}
	return 0;
}
