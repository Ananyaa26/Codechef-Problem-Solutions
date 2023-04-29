#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int w1,w2,x1,x2,M;
	    cin>>w1>>w2>>x1>>x2>>M;
	    int d = w2-w1;
	    int a = x1*M;
	    int b = x2*M;
	    if(d>=a && d<=b){
	        cout<<1<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
