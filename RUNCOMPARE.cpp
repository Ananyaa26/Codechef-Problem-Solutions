#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int alice[n];
	    int bob[n];
	    
	    int count = 0;
	    
	    for(int i=0;i<n;i++){
	        cin>>alice[i];
	    }
	    for(int j=0;j<n;j++){
	        cin>>bob[j];
	    }
	    for(int k=0;k<n;k++){
	        if((alice[k]<=2*bob[k])&&(bob[k]<=2*alice[k])){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
