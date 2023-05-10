#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n%2==0){
	        if(x>=n/2){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    
	    }else{
	        n=n-1;
	        if(x>n/2){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
