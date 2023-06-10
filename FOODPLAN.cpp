#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    float N,M;
	    cin>>N>>M;
	    N=0.9*N;
	    if(N<M){
	        cout<<"ONLINE"<<endl;
	    }else if(N>M){
	        cout<<"DINING"<<endl;
	    }else{
	        cout<<"EITHER"<<endl;
	    }
	}
	return 0;
}
