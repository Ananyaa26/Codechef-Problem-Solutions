#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = 0;
	    vector<int>num(n);
	    for(int i=0;i<n;i++){
	        cin>>num[i];
	    }
	    for(int i = 0 ; i < n ; i++){
	        if(num[i]>=10 && num[i]<=60){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
