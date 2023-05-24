#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n>0 && n<11){
	        cout<<"Lower Double"<<endl;
	    }else if(n>10 && n<16){
	        cout<<"Lower Single"<<endl;
	    }else if(n>15 && n<26){
	        cout<<"Upper Double"<<endl;
	    }else{
	        cout<<"Upper Single"<<endl;
	    }
	}
	return 0;
}
