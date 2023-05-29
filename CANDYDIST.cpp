#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N,M;
	    cin>>N>>M;
	    int temp=M*2;
	    if(N%temp==0){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
